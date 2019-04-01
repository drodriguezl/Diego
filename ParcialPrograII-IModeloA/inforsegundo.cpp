#include "inforsegundo.h"

InforSegundo::InforSegundo(unsigned long _DNI, string _nombre, vector<unsigned short> _notas):
    Informatica(_DNI, _nombre, 2,vector<string>{
            "Programacion",
            "Estadistica",
            "Circuitos"
        },_notas)
{

}
