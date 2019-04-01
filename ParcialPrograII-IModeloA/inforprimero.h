#ifndef INFORPRIMERO_H
#define INFORPRIMERO_H

#include "informatica.h"

class InforPrimero : public Informatica
{
public:
    InforPrimero(unsigned long int _DNI,
                 string _nombre,
                 vector<unsigned short int> _notas);
};

#endif // INFORPRIMERO_H
