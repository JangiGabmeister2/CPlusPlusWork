#pragma once

#include "Node.h"
#include <iostream>

class LinkedList
{
private:
    Node* firstNode;
    Node* lastNode;

public:
    LinkedList();

    void AddNode(int data);
    void InsertNode(int position, int data);
    void PrintList();
    void PrintListBackwards();
    void DeleteNode(int data);
};
