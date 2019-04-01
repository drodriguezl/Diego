#include "modaprimero.h"
#include "modasegundo.h"
#include "inforprimero.h"
#include "inforsegundo.h"

int main()
{
    vector <Alumno> alumnos;
    unsigned short int mm = 0;
    cout << "Quieres añadir? (1)" << endl;
    cin >> mm;
    while (mm == 1) {
        string name = " ";
        unsigned long int dni = 0;
        unsigned short int curso = 0;
        string grado = " ";
        vector<string> asig;
        vector<unsigned short int> notas;
        int nota = 0;
        cout << "Dime el nombre y el DNI" << endl;
        cin >> name;
        cin >> dni;
        cout << "Dime el grado(Informatica, Moda)" << endl;
        cin >> grado;
        if(grado == "Informatica"){
            cout << "Dime el curso(1,2)"<< endl;
            cin >> curso;
            if(curso == 1){
                cout << "Dime las notas(4)" << endl;
                cin >> nota;
                notas.push_back(nota);
                cin >> nota;
                notas.push_back(nota);
                cin >> nota;
                notas.push_back(nota);
                cin >> nota;
                notas.push_back(nota);
                alumnos.push_back(Alumno(InforPrimero(dni,name,notas)));
            }
            if(curso == 2){
                cout << "Dime las notas(3)" << endl;
                cin >> nota;
                notas.push_back(nota);
                cin >> nota;
                notas.push_back(nota);
                cin >> nota;
                notas.push_back(nota);
                alumnos.push_back(Alumno(InforSegundo(dni,name,notas)));
            }
        }
        if(grado == "Moda"){
            cout << "Dime el curso(1,2)"<< endl;
            cin >> curso;
            if(curso == 1){
                cout << "Dime las notas(3)" << endl;
                cin >> nota;
                notas.push_back(nota);
                cin >> nota;
                notas.push_back(nota);
                cin >> nota;
                notas.push_back(nota);
                alumnos.push_back(Alumno(ModaPrimero(dni,name,notas)));
            }
            if(curso == 2){
                cout << "Dime las notas(3)" << endl;
                cin >> nota;
                notas.push_back(nota);
                cin >> nota;
                notas.push_back(nota);
                cin >> nota;
                notas.push_back(nota);
                alumnos.push_back(Alumno(ModaSegundo(dni,name,notas)));
            }
        }
        cout << "Añadir? (1)" << endl;
        cin >> mm;
    }

    if(alumnos.size() > 0){
        for(unsigned long int i = 0; i<alumnos.size(); i++){
            cout << alumnos.at(i).getNombre() << " " << alumnos.at(i).getDNI() << endl;
            cout << alumnos.at(i).getGrado() << " " << alumnos.at(i).getCurso() << endl;
            for(unsigned long int ii = 0; i< alumnos.at(i).getAsignaturas().size(); i++){
                cout << alumnos.at(i).getAsignaturas().at(ii) << " " << alumnos.at(i).getNotas().at(ii) << endl;
            }
            cout << "Nota media: " << alumnos.at(i).getNotaMedia() << endl;
        }
    }

    return 0;
}
