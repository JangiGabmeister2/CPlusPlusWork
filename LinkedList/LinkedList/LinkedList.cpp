#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
    firstNode = nullptr;
    lastNode = nullptr;
}

void LinkedList::AddNode(__int32 data)
{
    Node* newNode = new Node(data);

    if (firstNode == nullptr)
    {
        firstNode = newNode;
        lastNode = newNode;
        return;
    }

    Node* thisNode = lastNode;

    newNode->prevNode = thisNode;
    thisNode->nextNode = newNode;
    lastNode = newNode;
}

void LinkedList::InsertNode(int position, int data)
{
    Node* newNode = new Node(data);
    if (firstNode == nullptr)
    {
        firstNode = newNode;
        lastNode = newNode;
        return;
    }

    if (position == 0)
    {
        newNode->nextNode = firstNode;
        firstNode->prevNode = newNode;
        firstNode = newNode;
    }

    int counter = 0;
    Node* thisNode = firstNode;
    while (counter < position)
    {
        if (thisNode->nextNode == nullptr)
        {
            newNode->prevNode = thisNode;
            thisNode->nextNode = newNode;
            lastNode = newNode;
            return;
        }

        thisNode = thisNode->nextNode;
        counter++;
    }
    if (thisNode == nullptr)
    {
        newNode->prevNode = lastNode;
    }
    else
    {
        newNode->nextNode = thisNode->nextNode;
        newNode->prevNode = thisNode;
        thisNode->nextNode = newNode;
        newNode->nextNode->prevNode = thisNode;
    }
}

void LinkedList::PrintList()
{
    Node* thisNode = firstNode;

    if (thisNode == nullptr)
    {
        cout << "List empty" << endl;
        return;
    }

    while (thisNode != nullptr)
    {
        cout << thisNode->data << " ";
        thisNode = thisNode->nextNode;
    }
}

void LinkedList::PrintListBackwards()
{
    Node* thisNode = lastNode;

    if (thisNode == nullptr)
    {
        cout << "List empty" << endl;
        return;
    }

    while (thisNode != nullptr)
    {
        cout << thisNode->data << " ";
        thisNode = thisNode->prevNode;
    }
}


void LinkedList::DeleteNode(__int32 position)
{
}
