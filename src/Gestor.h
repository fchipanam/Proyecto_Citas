#ifndef GESTOR_H
#define GESTOR_H
#include "Citas.h"
#include <vector>
#include <algorithm>
#include <fstream>

class GestorCitas{
	private:
    	vector<Cita*> listaCitas;
   		string Archivo_DB="citas_data.txt";
    	string ArchivoReporte="reporte_citas.txt";
	public:
    	void registrarCita(Cita*);
    	void listarCitas();
    	void buscarPorDNI(string);
	    void ordenarPorPrioridad();
    	void guardarDatos();
	    void cargarDatos();
	    void generarReporte();
	    ~GestorCitas();
};

void GestorCitas::registrarCita(Cita* nuevacita){
	listaCitas.push_back(nuevacita);
}

void GestorCitas::listarCitas(){
	if(listaCitas.empty()){
		cout<<"No hay citas registradas"<<endl;
	} else{
		cout<<"---LISTA DE CITAS MEDICAS---"<<endl;
		for(const auto& cita:listaCitas){
			cout<<cita->obtenerDetalles();
		}
	}
}

void GestorCitas::buscarPorDNI(string dnibuscar){
	bool e=0;//indicador de la busqueda
	cout<<"---RESULTADOS DE BUSQUEDA---"<<endl;
	for(const auto& cita:listaCitas){
		if(cita->getDNI()==dnibuscar){
			cout<<cita->obtenerDetalles();
			e=1;
		}
	}
	if(e==0){
		cout<<"No se encontro el paciente con el DNI: "<<dnibuscar<<endl;
	}
}

void GestorCitas::ordenarPorPrioridad(){
	sort(listaCitas.begin(), listaCitas.end(), [](Cita* a, Cita* b){
		return a->getPrioridad() < b->getPrioridad();
	});
	cout<<"Lista reordenada por prioridad (Alta a Baja)"<<endl;
}

void GestorCitas::guardarDatos(){
	ofstream archivo(Archivo_DB);//"citas_data.txt"
	if(archivo.is_open()){
		for(const auto& cita:listaCitas){
			archivo<<cita->formatoArchivo()<<endl;//definida en Citas.h
		}
		archivo.close();
		cout<<"Datos guardados correctamente en: "<<Archivo_DB;
	} else{
		cout<<"ERROR: No se guardo los datos"<<endl;
	}
}

#endif