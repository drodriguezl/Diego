#ifndef SI_H
#define SI_H
#include <vector>
#include "infor.h"

class Si : public Infor
{
public:
    Si(string nombre, int dni, vector<int> notas);
private:
    vector<string> asignaturas;
};

#endif // SI_H
