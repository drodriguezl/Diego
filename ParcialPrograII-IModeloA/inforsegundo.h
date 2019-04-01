#ifndef INFORSEGUNDO_H
#define INFORSEGUNDO_H

#include "informatica.h"

class InforSegundo : public Informatica
{
public:
    InforSegundo(unsigned long int _DNI,
                 string _nombre,
                 vector<unsigned short int> _notas);
};

#endif // INFORSEGUNDO_H
