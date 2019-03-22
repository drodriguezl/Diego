#include <iostream>

using namespace std;

#include "list.h"
#include "nodo.h"
#include <stdlib.h>
#include <time.h>

List lista;


int main()
{
    srand(time(NULL));
    for(int i = 0; i<20;i++){
        int num;
        num=1+rand()%(101-2);
        cout << num << " error " <<endl;
        lista.push(num);
    }
    lista.push(9);

    lista.print();

    cout <<endl<< lista.search(9);

    return 0;
}
