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
class CitaPresencial : public Cita{
    private:
        string especialidad;
        int numeroConsultorio;
    public:
        CitaPresencial(string _id, string dni,string nombre,int prio,string esp,int cons):Cita(_id,dni,nombre,prio){
            especialidad=esp;
            numeroConsultorio=cons;
        }
        string obtenerDetalles()const override{
            string descPrioridad;
            if(prioridad==1){
                descPrioridad="URGENCIA";
            }else if(prioridad==2){
                descPrioridad=="Normal";
            }else{
                descPrioridad=="Baja";
            }
            return "ID: " + id + " | Paciente: " + nombrePaciente + " (DNI: " + dniPaciente + ")\n" + "   -> Tipo: Presencial | Consultorio: " + to_string(numeroConsultorio) +" | Especialidad: " + especialidad + " | Prioridad: " + descPrioridad + "\n";
        }
        string formatoArchivo() const override{
            return "P|" + Cita::formatoArchivo() + "|" + especialidad + "|" + to_string(numeroConsultorio);
        }
};

#endif