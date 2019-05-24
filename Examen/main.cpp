#include "tabla.h"


int main()
{
    vector<vector<Data<string>>> a;
    vector<Data<string>> aa{ Data<string>("periquito"),Data<string>("perro"),Data<string>("paloma")};
    vector<Data<string>> aaa{ Data<string>("tortuga"),Data<string>("gallina"),Data<string>("lechuza")};
    vector<Data<string>> aaaa{ Data<string>("canario"),Data<string>("gato"),Data<string>("delfin")};
    vector<Data<string>> aaaaa{ Data<string>("orangutan"),Data<string>("gamusino"),Data<string>("garrapata")};
    a.push_back(aa);
    a.push_back(aaa);
    a.push_back(aaaa);
    a.push_back(aaaaa);
    Tabla<string> miTablaCadena(a);

    vector<vector<Data<int>>>n;
    vector<Data<int>>nn{Data<int>(3), Data<int>(2), Data<int>(4)};
    vector<Data<int>>nnn{Data<int>(5), Data<int>(6), Data<int>(7)};
    n.push_back(nn);
    n.push_back(nnn);
    Tabla<int> miTablaInts(n);

    cout << miTablaCadena;
    cout << miTablaInts;

    array<unsigned long int,2> an = miTablaInts.find(7);
    array<unsigned long int,2> ac = miTablaCadena.find(Data<string>("gamusino"));
    if (an.at(0) == 666){
        cout << "No encontrado" << endl;
    }else{
        cout << an.at(0)+1 << " " << an.at(1)+1 << endl;
    }
    if (ac.at(0) == 666){
        cout << "No encontrado" << endl;
    }else{
        cout << ac.at(0)+1 << " " << ac.at(1)+1 << endl;
    }

    miTablaInts.printNeighbours(2);
    cout << endl;
    miTablaInts.printNeighbours(7);
    cout << endl;
    miTablaCadena.printNeighbours(Data<string>("canario"));
    cout << endl;
    miTablaCadena.printNeighbours(Data<string>("gato"));
    cout << endl;
    miTablaCadena.printNeighbours(Data<string>("lechuza"));
    cout << endl;


    return 0;
}
