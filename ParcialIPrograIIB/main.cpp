#include <iostream>

using namespace std;

#include "persona.h"
#include "estudiante.h"
#include "personal.h"
#include "profesor.h"

int main()
{
    vector<Persona>Personas;
    vector <Profesor>profesores;
    vector <Estudiante> estudiantes;
    vector <Personal> personall;
    int mm = 0;
    while(mm !=2){
        cout << "Meter perosna(1), terminar(2)" << endl;
        cin >> mm;
        if(mm == 1){
            int ma = 0;
            cout << "Es Alumno(1), profesor(2) o Personal(3)?: " << endl;
            cin >> ma;
            if(ma == 1){
                int DNI;
                string nombre;
                string grado;
                int n = 0;
                vector<string>asignatutas;
                cout << "Dime el DNI: "; cin >> DNI;
                cout << "Dime el nombre: "; cin >> nombre;
                cout << "Dime el grado: "; cin>> grado;
                cout << "Dime el numero de asignaturas: "; cin >> n;
                for(int i = 0; i<n; i++){
                    string paco;
                    cout << "Nombre de la asignatura: "; cin >> paco;
                    asignatutas.push_back(paco);
                }
                Persona* aa = new Estudiante(DNI,nombre,grado,asignatutas);
                Estudiante* ee = new Estudiante(DNI,nombre,grado,asignatutas);
                Personas.push_back(*aa);
                estudiantes.push_back(*ee);
            }
            if(ma == 2){
                int DNI;
                string nombre;
                int salario;
                vector<string>clases;
                int n = 0;
                cout << "Dime el DNI: "; cin >> DNI;
                cout << "Dime el nombre: "; cin >> nombre;
                cout << "Dime el salario "; cin >> salario;
                cout << "Diem el numero de clases: "; cin >> n;
                for(int i = 0; i<n; i++){
                    string paco;
                    cout << "Dime el nimbre de la clase: "; cin >> paco;
                    clases.push_back(paco);
                }

                Persona* pp = new Profesor(DNI, nombre, salario, clases);
                Profesor* prpr = new Profesor(DNI, nombre, salario, clases);
                Personas.push_back(*pp);
                profesores.push_back(*prpr);
            }
            if(ma == 3){
                int DNI;
                string nombre;
                int salario;
                cout << "Dime el DNI: "; cin >> DNI;
                cout << "Dime el nombre: "; cin >> nombre;
                cout << "Dime el salario "; cin >> salario;
                Persona* pp = new Personal(DNI,nombre, salario);
                Personal* pepe = new Personal(DNI,nombre, salario);
                Personas.push_back(*pp);
                personall.push_back(*pepe);
            }
        }
    }
    if(Personas.size() > 0){
        cout << "Estudiantes " << endl;
        if(estudiantes.size() >0){
            for(unsigned long int i = 0; i<estudiantes.size(); i++){
                cout << estudiantes.at(i).getDni() << " " << estudiantes.at(i).getNombre() << " " << estudiantes.at(i).getGrado() << endl;
                for(unsigned long int ii = 0; ii<estudiantes.at(i).getAsignaturas().size(); ii++){
                    cout << estudiantes.at(i).getAsignaturas().at(ii)<<endl;
                }
            }
        }
        cout << "Profesores " << endl;
        if(profesores.size() >0){
            for(unsigned long int i = 0; i<profesores.size(); i++){
                cout << profesores.at(i).getDni() << " " << profesores.at(i).getNombre() << " " << profesores.at(i).getSalario() << endl;
                for(unsigned long int ii = 0; ii<profesores.at(i).getClases().size(); ii++){
                    cout << profesores.at(i).getClases().at(ii)<<endl;
                }
            }
        }
        cout << "Persoal " <<endl;
        if(personall.size() >0){
            for(unsigned long int i = 0; i<personall.size(); i++){
                cout << personall.at(i).getDni() << " " << personall.at(i).getNombre() << " " << personall.at(i).getSalario() << endl;
            }
        }
    }else{
        cout << "No  hay ninguna Persona " << endl;
    }
    return 0;
}
