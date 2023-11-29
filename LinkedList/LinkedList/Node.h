#pragma once
class Node
{
public:
	int data;
	Node* nextNode;
	Node* prevNode;

public:
	Node();
	Node(int data);
};

