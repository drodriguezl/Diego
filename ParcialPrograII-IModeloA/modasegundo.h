#ifndef MODASEGUNDO_H
#define MODASEGUNDO_H

#include "moda.h"

class ModaSegundo : public Moda
{
public:
    ModaSegundo(unsigned long int _DNI,
                string _nombre,
                vector<unsigned short int> _notas);
};

#endif // MODASEGUNDO_H
