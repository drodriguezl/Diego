#ifndef INFORMATICA_H
#define INFORMATICA_H

#include "alumno.h"

class Informatica : public Alumno
{
public:
    Informatica(unsigned long int _DNI,
                string _nombre,
                unsigned short int _curso,
                vector<string> _asignaturas,
                vector<unsigned short int> _notas);
};

#endif // INFORMATICA_H
