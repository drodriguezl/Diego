#ifndef INFOR_H
#define INFOR_H
#include <vector>
#include "alumno.h"

class Infor : public Alumno
{
public:
    Infor(string _nombre, int _dni, vector<int> _notas);
};

#endif // INFOR_H
