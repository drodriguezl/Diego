#ifndef ARBOL_H
#define ARBOL_H

#include "node.h"

class Arbol
{
public:
    Arbol(Node* inicio);

    Node *getStart() const;

    void push(Node* value);

    void print();
    Node* search(int value);
    void erase(int _value);
    void reset();

private:
    Node *start;
};

#endif // ARBOL_H
