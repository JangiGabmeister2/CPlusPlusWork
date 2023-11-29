#include "LinkedList.h"

LinkedList::LinkedList()
{
	frontNode = nullptr;
	lastNode = nullptr;
}

void LinkedList::AddNode(int data)
{
	Node* newNode = new Node(data);

	if (frontNode == nullptr)
	{
		frontNode = newNode;
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

	if (frontNode == nullptr)
	{
		frontNode = newNode;
		lastNode = newNode;
		return;
	}
	if (position == 0)
	{
		newNode->nextNode = frontNode;
		frontNode->prevNode = newNode;
		frontNode = newNode;
	}

	int counter = 0;
	Node* thisNode = frontNode;

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

	thisNode = thisNode->prevNode;

	newNode->nextNode = thisNode->nextNode;
	newNode->prevNode = thisNode;
	thisNode->nextNode = newNode;
	newNode->nextNode->prevNode = newNode;

	cout << "Inserting: " << position << " - " << data << endl;
}

void LinkedList::DeleteNode(int position)
{
	if (frontNode == nullptr)
	{
		return;
	}
	if (frontNode == lastNode)
	{
		delete frontNode;
		lastNode = nullptr;
		frontNode = nullptr;
		return;
	}

	//del = node to delete
	Node* del = frontNode;
	int counter = 0;
	while (counter < position)
	{
		if (del->nextNode == nullptr)
		{
			return;
		}
		del = del->nextNode;
		counter++;
	}

	Node* previous = del->prevNode;
	Node* next = del->nextNode;

	if (previous == nullptr)
	{
		next->prevNode = nullptr;
		frontNode = next;
	}
	else if (next == nullptr)
	{
		previous->nextNode = nullptr;
		lastNode = previous;
	}
	else
	{
		previous->nextNode = next;
		next->prevNode = previous;
	}

	cout << endl << "Deleting: " << position << " - " << del->data << endl;

	delete del;
}

void LinkedList::PrintList()
{
	Node* thisNode = frontNode;

	if (thisNode == nullptr)
	{
		cout << "List empty" << endl;
		return;
	}

	cout << endl << "Printing:" << endl;

	int counter = 0;
	while (thisNode != nullptr)
	{
		cout << counter << " - " << thisNode->data << endl;
		thisNode = thisNode->nextNode;
		counter++;
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

	cout << endl << "Printing backwards:" << endl;

	int counter = 0;
	while (thisNode != nullptr)
	{
		cout << counter << " - " << thisNode->data << endl;
		thisNode = thisNode->prevNode;
		counter++;
	}
}
