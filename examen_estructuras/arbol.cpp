#include "arbol.h"

Arbol::Arbol(Node *inicio):
    start{inicio}
{

}

Node *Arbol::getStart() const
{
    return start;
}

void Arbol::push(Node *value)
{
    start->push(value);
}

void Arbol::print()
{
    start->printodo();
}

Node *Arbol::search(int value)
{
    start->reset();
    Node* a = new Node(value);
    return start->search(a);
}

void Arbol::erase(int _value)
{
    start->reset();
    Node* a = new Node(_value);
    Node* value = start->search(a);

    if(value->getParent() != nullptr){
        Node* aux = value->getParent();
        array<Node*,4> aux1 = value->getChildren();
        for (auto n:aux1){
            if (n != nullptr) n->setParent(nullptr);

        }
        unsigned long int antonio;
        for(unsigned long int i = 0; i < aux->getChildren().size(); i++){
            if (aux->getChildren().at(i)->getNum() == value->getNum()){
                antonio = i;
            };
        }
        array <Node*,4> auxaux;
        if (antonio == 0)  auxaux = {nullptr, aux->getChildren().at(1), aux->getChildren().at(2), aux->getChildren().at(3)};
        if (antonio == 1) auxaux = {aux->getChildren().at(1), nullptr, aux->getChildren().at(2), aux->getChildren().at(3)};
        if (antonio == 2) auxaux = {aux->getChildren().at(1), aux->getChildren().at(1), nullptr, aux->getChildren().at(3)};
        if (antonio == 3) auxaux = {aux->getChildren().at(1), aux->getChildren().at(1), aux->getChildren().at(2), nullptr};
        aux->setChildren(auxaux);
        for (auto n:aux1){
            if(n != nullptr)start->push(n);

        }
    }else{
        array<Node*,4> aux = value->getChildren();
        aux.at(0) = start;
        for (auto n:aux){
            if(n != nullptr){
                n->setParent(nullptr);
            }
        }
        for (unsigned long int i = 1; i < aux.size(); i++){
            if (aux.at(i) != nullptr){
                start->push(aux.at(i));
            }
        }
    }
}

void Arbol::reset()
{
    start->reset();
}
