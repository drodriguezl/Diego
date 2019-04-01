#include "modasegundo.h"

ModaSegundo::ModaSegundo(unsigned long _DNI, string _nombre, vector<unsigned short> _notas):
    Moda(_DNI, _nombre, 1,vector<string>{
            "Influencers",
            "Clasica",
            "Reciclable"
        },_notas)
{

}
