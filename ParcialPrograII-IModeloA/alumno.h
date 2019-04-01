#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
#include <vector>

using namespace std;

class Alumno
{
public:
    Alumno(unsigned long int _DNI,
    string _nombre,
    string _grado,
    unsigned short int _curso,
    vector<string> _asignaturas,
    vector<unsigned short int> _notas);

    float getNotaMedia();

    unsigned long getDNI() const;
    void setDNI(unsigned long value);

    string getNombre() const;
    void setNombre(const string &value);

    string getGrado() const;
    void setGrado(const string &value);

    unsigned short getCurso() const;
    void setCurso(unsigned short value);

    vector<string> getAsignaturas() const;
    void setAsignaturas(const vector<string> &value);

    vector<unsigned short> getNotas() const;
    void setNotas(const vector<unsigned short> &value);

protected:
    unsigned long int DNI;
    string nombre;
    string grado;
    unsigned short int curso;
    vector<string> asignaturas;
    vector<unsigned short int> notas;

};

#endif // ALUMNO_H
