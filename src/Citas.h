#ifndef CITAS_H
#define CITAS_H
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Cita{
    protected:
        string id;
        string dniPaciente;
        string nombrePaciente;
        int prioridad;
    public:
        Cita(string  _id, string dni,string nombre, int pri ){
            id=_id;
            dniPaciente=dni;
            nombrePaciente=nombre;
            prioridad=pri;
        }
        string getDNI(){
            return dniPaciente;
        }
        int getPrioridad(){
            return prioridad;
        }
        string getNombre(){
            return nombrePaciente;
        }
        virtual string obtenerDetalles()const = 0;

        virtual string formatoArchivo() const{
        return id + "|" + dniPaciente + "|" + nombrePaciente + "|" + to_string(prioridad);
        }
        virtual ~Cita(){}
};

#endif