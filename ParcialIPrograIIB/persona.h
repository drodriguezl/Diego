#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <vector>

using namespace std;

class Persona
{
public:
    Persona(int Dni, string Nombre);

    int getDni() const;
    void setDni(int value);

    string getNombre() const;
    void setNombre(const string &value);

protected:
    int dni;
    string nombre;
};

#endif // PERSONA_H
