#include "pd.h"

Pd::Pd(string nombre, int dni, vector<int> notas):
    Diseno{nombre,dni,notas},
    asignaturas{"Diseno y Patrones","Corte y Confeccion","Tendencias"}
{

}

vector<string> Pd::getAsignaturas() const
{
    return asignaturas;
}

void Pd::setAsignaturas(const vector<string> &value)
{
    asignaturas = value;
}
