#include "arbol.h"

Arbol *arbolgenealogico;

void inicio()
{
    string nombre, apellido1, apellido2;
    cout << "Dime tu nombre: "; cin >> nombre;
    cout << "Dime tu apellido: "; cin >> apellido1;
    cout << "Dime tu otro apellido: "; cin >> apellido2;
    Arbol *arbolito = new Arbol(new Node (Persona(nombre, apellido1,apellido2)));
    arbolgenealogico = arbolito;
};

void search()
{
    for (;;) {
        string s;
        cout << "Quieres buscar? (y/n) "; cin >>s;
        if (s == "y"){
            string nombre, apellido1, apellido2;
            cout << "Dime el nombre: "; cin >> nombre;
            cout << "Dime el apellido: "; cin >> apellido1;
            cout << "Dime el otro apellido: "; cin >> apellido2;
            Persona a(nombre, apellido1, apellido2);
            arbolgenealogico->search(a);
        }
        if (s == "n") break ;
    }
}

void end()
{
    cout << "FIN" << endl;
}

int main()
{
    inicio();
    arbolgenealogico->working();
    arbolgenealogico->print();
    search();
    end();
    return 0;
}
