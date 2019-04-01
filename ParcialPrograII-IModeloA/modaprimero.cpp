#include "modaprimero.h"

ModaPrimero::ModaPrimero(unsigned long _DNI, string _nombre, vector<unsigned short> _notas):
    Moda(_DNI, _nombre, 1,vector<string>{
            "Patrones",
            "Corte",
            "Tendencias"
        },_notas)
{

}
