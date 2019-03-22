
#include "list.h"

List::List():
    first{nullptr},
    lastn{nullptr},
    lastp{nullptr}
{

}

void List::push(int _data)
{
    unsigned int data = _data;
    if(first == nullptr){
        push_zero();
        push_first(_data);
    }else{
            if(((data%3)== 0) || ((data%5)==0)){
                if((data%2) == 0){
                    if(lastp == nullptr){
                        push_first(_data);
                    }else{
                        push_back(_data, 1);
                    }
                }else{
                    if(lastn == nullptr){
                        push_first(_data);
                    }else{
                        push_back(_data, 2);
                    }
                }
            }else{
                if(((_data%2) == 0) && (lastp == nullptr)){
                    push_first(_data);
                }else{
                    if(lastn == nullptr){
                        push_first(_data);
                    }else{
                       push_front(_data);
                    }
                }

        }
    }
}

void List::print()
{
    if(lastn){
        lastn->printi();
    }else{
        if(lastp){
            lastp->prinp();
        }
    }
}

void List::push_front(int _data)
{
    Nodo *a =new Nodo(_data);
    unsigned int data = _data;
    if((data%2) == 0){
        Nodo* aux = first->getNext();
        first->setNext(a);
        a->setPrev(first);
        a->setNext(aux);
        aux->setPrev(a);
    }else{
        Nodo* aux = first->getPrev();
        first->setPrev(a);
        a->setNext(first);
        a->setPrev(aux);
        aux->setNext(a);
    }
}

void List::push_back(int _data, int _donde)
{
    Nodo* a = new Nodo(_data);
    if(_donde == 1){
        lastp->setNext(a);
        a->setPrev(lastp);
        lastp = a;
    }else{
        lastn->setPrev(a);
        a->setNext(lastn);
        lastn = a;
    }
}

void List::push_first(int _data)
{
    Nodo* a = new Nodo(_data);
    unsigned int data = _data;
    if((data%2) == 0){
        first->setNext(a);
        a->setPrev(first);
        lastp = a;
    }else{
        first->setPrev(a);
        a->setNext(first);
        lastn = a;
    }
}

void List::push_zero()
{
    Nodo* a = new Nodo(0);
    first = a;
}

Nodo *List::search(int _data)
{
    unsigned int data = _data;
    if((data%2) != 0){
        return first->searchi(_data);
    }else{
        return first->searchp(_data);
    }
}

Nodo *List::getLastp() const
{
    return lastp;
}

void List::setLastp(Nodo *value)
{
    lastp = value;
}

Nodo *List::getLastn() const
{
    return lastn;
}

void List::setLastn(Nodo *value)
{
    lastn = value;
}

Nodo *List::getFirst() const
{
    return first;
}

void List::setFirst(Nodo *value)
{
    first = value;
}
