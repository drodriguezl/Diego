#ifndef PI_H
#define PI_H
#include <vector>
#include "infor.h"

class Pi : public Infor
{
public:
    Pi(string nombre, int dni, vector<int> notas);

private:
    vector<string> asignaturas;
};

#endif // PI_H
