#include "personal.h"

Personal::Personal(int Dni, string Nombre, int Salario):
    Persona(Dni,Nombre),
    salario{Salario}
{

}

int Personal::getSalario() const
{
    return salario;
}

void Personal::setSalario(int value)
{
    salario = value;
}
