#ifndef MODA_H
#define MODA_H

#include "alumno.h"

class Moda : public Alumno
{
public:
    Moda(unsigned long int _DNI,
         string _nombre,
         unsigned short int _curso,
         vector<string> _asignaturas,
         vector<unsigned short int> _notas);
};

#endif // MODA_H
