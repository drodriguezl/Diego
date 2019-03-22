#ifndef PD_H
#define PD_H
#include <vector>
#include "diseno.h"

class Pd : public Diseno
{
public:
    Pd(string nombre, int dni, vector<int> notas);

    vector<string> getAsignaturas() const;
    void setAsignaturas(const vector<string> &value);

private:
    vector<string> asignaturas;
};

#endif // PD_H
