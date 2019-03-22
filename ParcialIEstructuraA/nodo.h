#ifndef NODO_H
#define NODO_H

#include <iostream>
using namespace std;


class Nodo
{
public:
    Nodo(int _data);

    void push(int _data);

    void print();

    int getData() const;
    void setData(int value);

    Nodo *getPrev() const;
    void setPrev(Nodo *value);

    Nodo *getNext() const;
    void setNext(Nodo *value);

private:
    int data;
    Nodo *next;
    Nodo *prev;
};

#endif // NODO_H
