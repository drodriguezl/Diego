#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <array>
#include <vector>
#include <math.h>

using namespace std;

class Node
{
public:
    Node(int _num);

    void push(Node* value);
    void printodo();
    Node *search(Node* value);
    void print();

    bool esMultoIgu(Node* value);
    bool esDivi(Node* value);
    bool esPar(Node* value);
    bool esImpar(Node* value);

    int getNum() const;

    Node *getParent() const;
    void setParent(Node *value);

    array<Node *, 4> getChildren() const;
    void setChildren(const array<Node *, 4> &value);

    void reset();

    bool getVisited() const;
    void setVisited(bool value);

private:
    int num;
    Node* parent;
    array<Node*,4> children;
    bool visited;
};

#endif // NODE_H
