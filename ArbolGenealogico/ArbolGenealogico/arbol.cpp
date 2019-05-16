#include "arbol.h"

Arbol::Arbol(Node *tu):
    start{tu}
{

}

void Arbol::working()
{
    start->working();
}

void Arbol::print()
{
    start->reset();
    start->run();
}

void Arbol::reset()
{
    start->reset();
}

void Arbol::search(Persona persona_busqueda)
{
    start->reset();
    Node * a = start->search(persona_busqueda);
    cout << a->getPersonita() << endl;
    cout << "Hermanos: " << endl;
    if (a->getBros().size()){
        for (auto it:a->getBros()) {
            if (it != a) cout << it->getPersonita() << endl;
        }
    }
    cout << "Padres: " << endl;
    if (a->getPadres().at(1)){
        for (auto it:a->getPadres()) {
            if (it != a) cout << it->getPersonita() << endl;
        }
    }
    cout << "Hijos: " << endl;
    if (a->getHijos().size()){
        for (auto it:a->getHijos()) {
            if(it != a) cout << it->getPersonita() << endl;
        }
    }
}

Node *Arbol::getStart() const
{
    return start;
}

void Arbol::setStart(Node *value)
{
    start = value;
}
