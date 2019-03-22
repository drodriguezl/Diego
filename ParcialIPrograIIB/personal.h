#ifndef PERSONAL_H
#define PERSONAL_H

#include "persona.h"

class Personal : public Persona
{
public:
    Personal(int Dni, string Nombre, int salario);

    int getSalario() const;
    void setSalario(int value);

protected:
    int salario;
};

#endif // PERSONAL_H
