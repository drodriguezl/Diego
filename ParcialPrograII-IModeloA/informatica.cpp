#include "informatica.h"

Informatica::Informatica(unsigned long _DNI, string _nombre, unsigned short _curso, vector<string> _asignaturas, vector<unsigned short> _notas):
    Alumno{_DNI, _nombre,"Informatica", _curso, _asignaturas, _notas}
{

}
