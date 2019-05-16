#include "node.h"

Node::Node(Persona _persona):
    personita{_persona},
    visitado{false}
{

}

void Node::working()
{
    cout << endl;
    string b;
    cout << "Agregar a hermanos? (y/n) de " << this->getPersonita() << " :"; cin >> b;
    if (b == "y") this->add_bros();
    string p;
    cout << "Agregar padres? (y/n) de " << this->getPersonita() << " :"; cin >> p;
    if (p == "y") this->add_parents();
    if (this->getPadres().at(1)){
        for (auto a:this->getPadres()) {
            a->working();
        }
    }
}

void Node::add_bros()
{
    unsigned long int brothers = 0;
    cout << "Dime el numero de hermanos: "; cin >> brothers;
    if(brothers >= 1){
        set<Node*> brother;
        for (unsigned long int it = 0; it < brothers; it++) {
            string nombre, apellido_1, apellido_2;
            cout << "Dime el nombre de hermano " << it+1 << " :";cin >> nombre;
            cout << "Dime el apellido de hermano " << it+1 << " :";cin >> apellido_1;
            cout << "Dime el otro apellido de hermano " << it+1 << " :";cin >> apellido_2;
            brother.insert(new Node(Persona(nombre, apellido_1, apellido_2)));
        }
        brother.insert(this);
        this->setBros(brother);
        for (auto a:this->getBros()) {
            a->setBros(brother);
        }
    }
}

void Node::add_parents()
{
    array<Node *, 2> padre;
    for (unsigned long int it = 0; it < 2; it++) {
        string nombre, apellido_1, apellido_2;
        cout << "Dime el nombre de padre " << it+1 << " :";cin >> nombre;
        cout << "Dime el apellido de padre " << it+1 << " :";cin >> apellido_1;
        cout << "Dime el otro apellido de padre " << it+1 << " :";cin >> apellido_2;
        padre.at(it) = new Node(Persona(nombre, apellido_1, apellido_2));
    }
    this->setPadres(padre);
    for (auto a:this->getBros()) {
        a->setPadres(padre);
    }
    for (auto a:this->getPadres()) {
        a->setHijos(this->getBros());
    }
}

void Node::run()
{
    if (bros.size()){
        for (auto b:bros) {
            if (!b->getVisitado()){
                cout << b->getPersonita() << endl;
                b->setVisitado(true);
            }
        }
    }else{
        cout << this->getPersonita() << endl;
    }

    if (padres.at(1)){
        for (auto p:padres) {
            if (!p->getVisitado()) p->run();
        }
    }
}

void Node::reset()
{
    if(bros.size()){
        for (auto b:bros) {
            if (b->getVisitado()) b->setVisitado(false);
        }
    }else{
        this->setVisitado(false);
    }
    if (padres.at(1)){
        for (auto p:padres) {
            if (p->getVisitado()) p->reset();
        }
    }
}

Node *Node::search(Persona persona_busqueda)
{
    if (bros.size()){
        for (auto b:bros) {
            if (!b->getVisitado()){
                if (b->getPersonita() == persona_busqueda) return b;
                b->setVisitado(true);
            }
        }
    }else{
        if (this->getPersonita() == persona_busqueda) return this;
    }

    if (padres.at(1)){
        for (auto p:padres) {
            if (!p->getVisitado()) return p->search(persona_busqueda);
        }
    }
    return nullptr;
}

Persona Node::getPersonita() const
{
    return personita;
}

bool Node::getVisitado() const
{
    return visitado;
}

void Node::setVisitado(bool value)
{
    visitado = value;
}

set<Node *> Node::getHijos() const
{
    return hijos;
}

void Node::setHijos(const set<Node *> &value)
{
    hijos = value;
}

set<Node *> Node::getBros() const
{
    return bros;
}

void Node::setBros(const set<Node *> &value)
{
    bros = value;
}

array<Node *, 2> Node::getPadres() const
{
    return padres;
}

void Node::setPadres(const array<Node *, 2> &value)
{
    padres = value;
}
