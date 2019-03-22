#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"


class Estudiante : public Persona
{
public:
    Estudiante(int Dni, string Nombre, string Grado, vector<string>Asignaturas);

    vector<string> getAsignaturas() const;
    void setAsignaturas(const vector<string> &value);

    string getGrado() const;
    void setGrado(const string &value);


protected:
    string grado;
    vector<string>asignaturas;
};

#endif // ESTUDIANTE_H
