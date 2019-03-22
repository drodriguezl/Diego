#include "nodo.h"

Nodo::Nodo(int _data):
    data{_data},
    next{nullptr},
    prev{nullptr}
{

}

void Nodo::push(int _data)
{
    if(_data > next->getData()){
        next->push(data);
    }else{
        Nodo* aux = next;
        Nodo* xxx = new Nodo(_data);
        next = xxx;
        xxx->setNext(aux);
        aux->setPrev(xxx);
    }
}

void Nodo::print()
{
    cout << this->getData() << endl;
    if(next){
        next->print();
    }
}

int Nodo::getData() const
{
    return data;
}

void Nodo::setData(int value)
{
    data = value;
}

Nodo *Nodo::getPrev() const
{
    return prev;
}

void Nodo::setPrev(Nodo *value)
{
    prev = value;
}

Nodo *Nodo::getNext() const
{
    return next;
}

void Nodo::setNext(Nodo *value)
{
    next = value;
}
