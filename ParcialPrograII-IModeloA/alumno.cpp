#include "alumno.h"

Alumno::Alumno(unsigned long _DNI, string _nombre, string _grado, unsigned short _curso, vector<string> _asignaturas, vector<unsigned short> _notas):
    DNI{_DNI},
    nombre{_nombre},
    grado{_grado},
    curso{_curso},
    asignaturas{_asignaturas},
    notas{_notas}
{

}

float Alumno::getNotaMedia()
{
    float media = 0;
    for(unsigned long int i = 0; i<notas.size(); i++){
        media = media + notas.at(i);
    }
    media = media / notas.size();
    return media;
}

unsigned long Alumno::getDNI() const
{
    return DNI;
}

void Alumno::setDNI(unsigned long value)
{
    DNI = value;
}

string Alumno::getNombre() const
{
    return nombre;
}

void Alumno::setNombre(const string &value)
{
    nombre = value;
}

string Alumno::getGrado() const
{
    return grado;
}

void Alumno::setGrado(const string &value)
{
    grado = value;
}

unsigned short Alumno::getCurso() const
{
    return curso;
}

void Alumno::setCurso(unsigned short value)
{
    curso = value;
}

vector<string> Alumno::getAsignaturas() const
{
    return asignaturas;
}

void Alumno::setAsignaturas(const vector<string> &value)
{
    asignaturas = value;
}

vector<unsigned short> Alumno::getNotas() const
{
    return notas;
}

void Alumno::setNotas(const vector<unsigned short> &value)
{
    notas = value;
}
