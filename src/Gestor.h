#ifndef GESTOR_H
#define GESTOR_H
#include "Citas.h"
#include <vector>

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

#endif