#include "profesor.h"

Profesor::Profesor(int Dni, string Name, int Salario, vector<string> Clases):
    Persona(Dni, Name),
    salario{Salario},
    clases{Clases}
{

}

int Profesor::getSalario() const
{
    return salario;
}

void Profesor::setSalario(int value)
{
    salario = value;
}

vector<string> Profesor::getClases() const
{
    return clases;
}

void Profesor::setClases(const vector<string> &value)
{
    clases = value;
}
