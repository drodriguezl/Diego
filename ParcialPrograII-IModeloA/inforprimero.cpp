#include "inforprimero.h"

InforPrimero::InforPrimero(unsigned long _DNI, string _nombre, vector<unsigned short> _notas):
    Informatica(_DNI, _nombre, 1,vector<string>{
            "Programacion",
            "Fisica",
            "Matematicas",
            "Empresa"
        },_notas)
{

}
