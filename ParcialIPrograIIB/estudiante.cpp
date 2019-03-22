#include "estudiante.h"

Estudiante::Estudiante(int Dni, string Nombre, string Grado, vector<string> Asignaturas):
    Persona(Dni, Nombre),
    grado{Grado},
    asignaturas{Asignaturas}
{

}

vector<string> Estudiante::getAsignaturas() const
{
    return asignaturas;
}

void Estudiante::setAsignaturas(const vector<string> &value)
{
    asignaturas = value;
}

string Estudiante::getGrado() const
{
    return grado;
}

void Estudiante::setGrado(const string &value)
{
    grado = value;
}


