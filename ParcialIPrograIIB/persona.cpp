#include "persona.h"

Persona::Persona(int Dni, string Nombre):
    dni{Dni},
    nombre{Nombre}
{

}

int Persona::getDni() const
{
    return dni;
}

void Persona::setDni(int value)
{
    dni = value;
}

string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const string &value)
{
    nombre = value;
}
