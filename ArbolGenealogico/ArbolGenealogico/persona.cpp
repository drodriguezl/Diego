#include "persona.h"

Persona::Persona(string _nombre, string _primerApellido, string _segundoApelido):
    name{_nombre},
    apellido1{_primerApellido},
    apellido2{_segundoApelido}
{

}

string Persona::getName() const
{
    return name;
}

string Persona::getApellido1() const
{
    return apellido1;
}

string Persona::getApellido2() const
{
    return apellido2;
}



ostream &operator<<(ostream &os, const Persona &value)
{
    os << value.getName() << " " << value.getApellido1() << " " << value.getApellido2();
    return os;
}

bool operator ==(const Persona &p1, const Persona &p2)
{
    return ((p1.getName() == p2.getName()) &&
            ((p1.getApellido1() == p2.getApellido1()) && (p1.getApellido2() == p2.getApellido2())));
}
