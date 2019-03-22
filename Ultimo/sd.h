#ifndef SD_H
#define SD_H
#include <vector>
#include "diseno.h"

class Sd : public Diseno
{
public:
    Sd(string nombre, int dni, vector<int> notas);

private:
    vector<string> asignaturas;
};

#endif // SD_H
