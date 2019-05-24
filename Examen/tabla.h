#ifndef TABLA_H
#define TABLA_H

#include "data.h"

template< class T>
class Tabla
{
public:
    Tabla(vector<vector<Data<T>>>_elvector);

    array<unsigned long, 2> find(Data<T> _buscar);
    void printNeighbours(Data<T> _buscar);
    vector<vector<Data<T>>> getVector();
private:
    vector<vector<Data<T>>>elvector;
};

template <class T>
ostream &operator << (ostream &os , Tabla<T> const & n1)
{
    Tabla<T> a = n1;
    a.getVector();
    for (unsigned long int i = 0; i < a.getVector().size() ; i++) {
        os << endl;
        for (unsigned long int it = 0; it < a.getVector().at(i).size(); it++) {
            os << a.getVector().at(i).at(it).getValue() << " ";
        }
    }
    os << endl;
    return os;
}

template <class T>
Tabla<T>::Tabla(vector<vector<Data<T>>>_elvector):
    elvector{_elvector}
{

}

template <class T>
array<unsigned long, 2> Tabla<T>::find(Data<T> _buscar){
    for (unsigned long int i = 0; i < elvector.size(); i++) {
        for (unsigned long int it = 0; it < elvector.at(i).size(); it++) {
            if (_buscar.getValue() == elvector.at(i).at(it).getValue()){
                array<unsigned long int, 2> antonio {i,it};
                return antonio;
            }
        }
    }
    return array<unsigned long int, 2> {666,666};
}

template <class T>
vector<vector<Data<T>>> Tabla<T>::getVector(){
    return elvector;
}

template <class T>
void Tabla<T>::printNeighbours(Data<T> _buscar){
    array<unsigned long int,2> a = find(_buscar);
    if (a.at(0) == 666){

    }else{
        if(a.at(1)>0) {
            cout << "izquierda: " << endl;
            cout << elvector.at(a.at(0)).at(a.at(1)-1).getValue()<< endl;
        }
        if(a.at(0)>0) {
            cout << "arriba: " << endl;
            cout << elvector.at(a.at(0)-1).at(a.at(1)).getValue()<< endl;
        }
        if(a.at(1)+1 < elvector.at(a.at(0)).size()) {
            cout << "derecha: " << endl;
            cout << elvector.at(a.at(0)).at(a.at(1)+1).getValue()<< endl;
        }
        if(a.at(0)+1 < elvector.size()) {
            cout << "abajo: " << endl;
            cout << elvector.at(a.at(0)+1).at(a.at(1)).getValue()<< endl;
        }
    }
}
#endif // TABLA_H
