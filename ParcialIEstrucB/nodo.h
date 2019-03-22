#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;


class Nodo
{
public:
    Nodo(int _data);

    void printi();
    void prinp();

    Nodo *searchp(int _data);
    Nodo* searchi(int _data);

    int getData() const;
    void setData(int value);

    Nodo *getNext() const;
    void setNext(Nodo *value);

    Nodo *getPrev() const;
    void setPrev(Nodo *value);

private:
    int data;
    Nodo *next;
    Nodo *prev;
};

ostream& operator<<(ostream& os, Nodo* const & p);

#endif // NODO_H
