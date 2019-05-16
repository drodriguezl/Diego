#ifndef ARBOL_H
#define ARBOL_H

#include "node.h"

class Arbol
{
public:
    Arbol(Node *tu);

    void working();

    void print();
    void reset();
    void search(Persona persona_busqueda);

    Node *getStart() const;
    void setStart(Node *value);

private:
    Node *start;
};

#endif // ARBOL_H
