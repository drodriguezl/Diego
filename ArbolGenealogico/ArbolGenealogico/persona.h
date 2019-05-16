#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <set>
#include <vector>
#include <array>

using namespace std;

class Persona
{
public:
    Persona(string _nombre, string _primerApellido, string _segundoApelido);

    string getName() const;

    string getApellido1() const;

    string getApellido2() const;

private:
    string name, apellido1, apellido2;
};

ostream &operator<<(ostream& os, Persona const & value);
bool operator == (Persona const & p1, Persona const & p2);

#endif // PERSONA_H
