#include <iostream>
#include "Citas.h"
#include "Gestor.h"

using namespace std;

void mostrarMenu() {
    cout << endl << "=== SISTEMA DE GESTION DE CITAS MEDICAS UNJBG ===" << endl;
    cout << "1. Registrar Nueva Cita" << endl;
    cout << "2. Ver Todas las Citas" << endl;
    cout << "3. Buscar Cita por DNI" << endl;
    cout << "4. Ordenar Citas por Prioridad (Urgencia)" << endl;
    cout << "5. Generar Reporte TXT" << endl;
    cout << "6. Guardar y Salir" << endl;
    cout << "*Seleccione una opcion: " << endl;
}

int main(){
    GestorCitas gestor;
    gestor.cargarDatos();
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
        case 1: {
            string dni, nombre, esp, id;
            int prio, cons;
            
            cout << "Ingrese ID de Cita: ";
            getline(cin, id);
            cout << "DNI Paciente: ";
            getline(cin, dni);
            cout << "Nombre Paciente: ";
            getline(cin, nombre);
            cout << "Prioridad (1:Alta, 2:Media, 3:Baja): ";
            cin >> prio;
            cin.ignore();
            cout << "Especialidad: ";
            getline(cin, esp);
            cout << "Numero de Consultorio: ";
            cin >> cons;
            Cita* nueva = new CitaPresencial(id, dni, nombre, prio, esp, cons);
            gestor.registrarCita(nueva);
            cout << ">> Cita registrada con exito." << endl;
            break;
        }
        case 2:
            gestor.listarCitas();
            break;
        default:
            cout << "Opcion no valida" << endl;
        }
    } while (opcion != 6);

    return 0;
}
