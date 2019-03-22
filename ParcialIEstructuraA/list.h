#ifndef LIST_H
#define LIST_H

#include "nodo.h"

class List
{
public:
    List();

    void push_in_order(int _data);

    Nodo* search_part2(int _data, Nodo* fr, Nodo* ls);

    Nodo *search(int _data);

    void print();
private:
    Nodo* first;
    Nodo* last;
};

#endif // LIST_H
