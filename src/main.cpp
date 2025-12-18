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
    cout << "-------------------------------------------" << endl;
}

int main(){
    int opcion;
    mostrarMenu();
    cin >> opcion;

    return 0;
}
