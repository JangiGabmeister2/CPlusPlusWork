// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
    cout << "Hello World!\n";

    LinkedList list;
    
    list.AddNode(1);
    list.AddNode(2);
    list.AddNode(3);
    list.AddNode(4);
    list.AddNode(5);
    list.AddNode(6);
    list.AddNode(7);
    
    cout << "Elements are : \n";

    list.PrintList();

    list.DeleteNode(3);
    list.InsertNode(3, 8);
    list.InsertNode(5, 0);
    
    list.PrintList();
    list.PrintListBackwards();
    
    string s;
    cin >> s;

    return 0;
}