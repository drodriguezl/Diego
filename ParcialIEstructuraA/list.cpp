#include "list.h"

List::List():
    first{nullptr},
    last{nullptr}
{

}

void List::push_in_order(int _data)
{
    Nodo* xxx = new Nodo(_data);
    if(first){
        if(_data < first->getData()){
            first->setPrev(xxx);
            xxx->setNext(first);
            first = xxx;
        }else{
            if(_data > last->getData()){
                last->setNext(xxx);
                xxx->setPrev(last);
                last = xxx;
            }else{
                first->push(_data);
            }
        }
    }else{
        first = xxx;
        last = first;
    }
}

Nodo *List::search(int _data)
{
    if(first->getData() == _data){
        return first;
    }else{
        if(last->getData() == _data){
            return last;
        }else{
            cout << first->getData() << endl;
            cout << last->getData() << endl;
            return search_part2(_data, first->getNext(), last->getPrev());
        }
    }
}

void List::print()
{
    if(first){
        first->print();
    }
}

Nodo *List::search_part2(int _data, Nodo *fr, Nodo *ls)
{
    if(_data == fr->getData()){
        cout << fr->getData();
        return fr;
    }else{
        if(_data == ls->getData()){
            return fr;
        }else{
            cout << fr->getData();
            cout << ls->getData();
            return search_part2(_data,fr->getNext(), ls->getPrev());
        }
    }
}
