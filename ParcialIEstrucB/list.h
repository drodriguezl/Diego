#ifndef LIST_H
#define LIST_H

#include "nodo.h"

class List
{
public:
    List();

    void push(int _data);

    void print();

    void push_front(int _data);

    void push_back(int _data, int _donde);

    void push_first(int _data);

    void push_zero();

    Nodo *search(int _data);

    Nodo *getLastp() const;
    void setLastp(Nodo *value);

    Nodo *getLastn() const;
    void setLastn(Nodo *value);

    Nodo *getFirst() const;
    void setFirst(Nodo *value);

private:
    Nodo *lastp;
    Nodo *lastn;
    Nodo *first;
};

#endif // LIST_H
