#include "Node.h"

#include <iterator>

Node::Node()
{
    data = 0;
    nextNode = nullptr;
    this->prevNode = nullptr;
}

Node::Node(int data)
{
    this->data = data;
    this->nextNode = nullptr;
    prevNode = nullptr;
}
