#ifndef NODE_H
#define NODE_H

#include "persona.h"

class Node
{
public:
    Node(Persona _persona);

    void working();
    void add_bros();
    void add_parents();

    void run();
    void reset();
    Node *search(Persona persona_busqueda);

    Persona getPersonita() const;

    bool getVisitado() const;
    void setVisitado(bool value);

    set<Node *> getHijos() const;
    void setHijos(const set<Node *> &value);

    set<Node *> getBros() const;
    void setBros(const set<Node *> &value);

    array<Node *, 2> getPadres() const;
    void setPadres(const array<Node *, 2> &value);

private:
    Persona personita;
    bool visitado;
    set<Node *> hijos;
    array<Node *, 2> padres;
    set<Node *> bros;

};

#endif // NODE_H
