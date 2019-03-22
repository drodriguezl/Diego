#include <iostream>
#include<stdlib.h>

using namespace std;

#include "list.h"

List listita;
int main()
{
    srand(time(NULL));
    listita.push_in_order(3);
    for(int i = 0; i<10; i++){
        int num=rand()%11;
        listita.push_in_order(num);
    }

    listita.print();
    cout << "busqueda: " << endl;
    Nodo* a = listita.search(3);
    if(a){
        cout << endl;
        cout << "Encontrado: " << endl;
        cout << a->getData() << endl;
    }
    return 0;
}
