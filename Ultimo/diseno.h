#ifndef DISENO_H
#define DISENO_H
#include <vector>
#include "alumno.h"

class Diseno : public Alumno
{
public:
    Diseno(string _nombre, int _dni, vector<int>_notas);
};

#endif // DISENO_H
