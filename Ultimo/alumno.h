#ifndef ALUMNO_H
#define ALUMNO_H
#include <vector>
#include <iostream>

using namespace std;

class Alumno
{
public:
    Alumno(string _nombre, int _dni, string _grado, vector<int> _notas);
private:
    string nombre, grado;
    int dni ;
    vector<int>notas;

};

#endif // ALUMNO_H
