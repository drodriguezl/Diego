#include "nodo.h"

Nodo::Nodo(int _data):
    data{_data},
    prev{nullptr},
    next{nullptr}
{

}

void Nodo::printi()
{
    cout << this->getData() << endl;
    if(next){
        next->printi();
    }
}

void Nodo::prinp()
{
    cout << this->getData() << endl;
    if(prev){
        prev->printi();
    }
}

Nodo *Nodo::searchp(int _data)
{
    if(next){
        if(next->getData() == _data){
            return next;
        }else{
            cout << this ;
            return next->searchp(_data);
        }
    }else{
        return nullptr;
    }

}

Nodo *Nodo::searchi(int _data)
{
    if(prev){
        if(prev->getData() == _data){
            return prev;
        }else{
            cout << this ;
            return prev->searchi(_data);
        }
    }else{
        return nullptr;
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

Nodo *Nodo::getNext() const
{
    return next;
}

void Nodo::setNext(Nodo *value)
{
    next = value;
}

Nodo *Nodo::getPrev() const
{
    return prev;
}

void Nodo::setPrev(Nodo *value)
{
    prev = value;
}

ostream &operator<<(ostream &os, Nodo * const &p)
{
    os << p->getData() << endl;
    return os;
}
