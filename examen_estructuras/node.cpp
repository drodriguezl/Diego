#include "node.h"

Node::Node(int _num):
    num{_num},
    parent{nullptr},
    children{nullptr,nullptr,nullptr,nullptr},
    visited{false}
{

}

void Node::push(Node *value)
{
    if (esMultoIgu(value)){
        if (children.at(0) != nullptr){
            children.at(0)->push(value);
        }else{
            children.at(0) = value;
            value->setParent(this);
        }
    }else{
        if (esDivi(value)){
            if (children.at(1) != nullptr){
                children.at(1)->push(value);
            }else{
                children.at(1) = value;
                value->setParent(this);
            }
        }else{
            if (esPar(value)){
                if (children.at(2) != nullptr){
                    children.at(2)->push(value);
                }else{
                    children.at(2) = value;
                    value->setParent(this);
                }
            }else{
                if (children.at(3) != nullptr){
                    children.at(3)->push(value);
                }else{
                    children.at(3) = value;
                    value->setParent(this);
                }
            }
        }
    }
}

void Node::printodo()
{
    cout << num << endl;
    if (children.at(0) != nullptr) children.at(0)->printodo();
    if (children.at(1) != nullptr) children.at(1)->printodo();
    if (children.at(2) != nullptr) children.at(2)->printodo();
    if (children.at(3) != nullptr) children.at(3)->printodo();
}

Node *Node::search(Node *value)
{
    if (num == value->getNum()) return this;
    visited = true;
    for (auto n:children) {
        if ((n != nullptr) && (n->getVisited() == false)) return n->search(value);
    }
    if (parent) return parent->search(value);
    return nullptr;
}

void Node::print()
{
    cout << num << endl;
    if (children.at(0) != nullptr) cout << children.at(0)->getNum() << endl;
    if (children.at(1) != nullptr) cout << children.at(1)->getNum() << endl;
    if (children.at(2) != nullptr) cout << children.at(2)->getNum() << endl;
    if (children.at(3) != nullptr) cout << children.at(3)->getNum() << endl;
}

bool Node::esMultoIgu(Node *value)
{
    bool a = false;
    if ((value->getNum() % num) == 0) a = true;
    if (value->getNum() == num) a = true;
    return a;
}

bool Node::esDivi(Node *value)
{
    bool a = false;
    if ((num % value->getNum()) == 0) a = true;
    return a;
}

bool Node::esPar(Node *value)
{
    bool a = false;
    if ((value->getNum() % 2) == 0) a = true;
    return a;
}

bool Node::esImpar(Node *value)
{
    bool a = false;
    if ((value->getNum() % 2) != 0) a = true;
    return a;
}

int Node::getNum() const
{
    return num;
}

Node *Node::getParent() const
{
    return parent;
}

void Node::setParent(Node *value)
{
    parent = value;
}

array<Node *, 4> Node::getChildren() const
{
    return children;
}

void Node::setChildren(const array<Node *, 4> &value)
{
    children = value;
}

void Node::reset()
{
    visited = false;
    if (children.at(0) != nullptr) children.at(0)->reset();
    if (children.at(1) != nullptr) children.at(1)->reset();
    if (children.at(2) != nullptr) children.at(2)->reset();
    if (children.at(3) != nullptr) children.at(3)->reset();
}

bool Node::getVisited() const
{
    return visited;
}

void Node::setVisited(bool value)
{
    visited = value;
}
