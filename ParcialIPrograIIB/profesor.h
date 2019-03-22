#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"

class Profesor : public Persona
{
public:
    Profesor(int Dni, string Name, int Salario, vector<string> Clases);

    int getSalario() const;
    void setSalario(int value);

    vector<string> getClases() const;
    void setClases(const vector<string> &value);

protected:
    int salario;
    vector <string> clases;
};

#endif // PROFESOR_H
