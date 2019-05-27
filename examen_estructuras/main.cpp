#include "arbol.h"

int main()
{
    Arbol miArbol(new Node(20));
    miArbol.push(new Node(15));
    miArbol.push(new Node(80));
    miArbol.push(new Node(10));
    miArbol.push(new Node(40));
    miArbol.push(new Node(30));
    miArbol.push(new Node(160));
    miArbol.push(new Node(5));
    miArbol.push(new Node(4));

    cout << "Arbol: " << endl;
    miArbol.print();

    Node* a = miArbol.search(80);
    if (a == nullptr){
        cout << "No encontrado" << endl;
    }else{
        cout << "Encontrado: " << endl;
        a->print();
    }

    Node* aa = miArbol.search(10);
    if (aa == nullptr){
        cout << "No encontrado" << endl;
    }else{
        cout << "Encontrado: " << endl;
        aa->print();
    }

    cout << "Eliminando 80: " << endl;
    cout << "Nuevo Arbol: " << endl;
    miArbol.erase(80);
    miArbol.print();
}
