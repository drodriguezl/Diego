#ifndef MODAPRIMERO_H
#define MODAPRIMERO_H

#include "moda.h"

class ModaPrimero : public Moda
{
public:
    ModaPrimero(unsigned long int _DNI,
                string _nombre,
                vector<unsigned short int> _notas);
};

#endif // MODAPRIMERO_H
