#pragma once

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList
{
private:
	Node* frontNode;
	Node* lastNode;

public:
	LinkedList();

	void AddNode(int data);

	void InsertNode(int position, int data);

	void PrintList();

	void PrintListBackwards();

	void DeleteNode(int position);
};

