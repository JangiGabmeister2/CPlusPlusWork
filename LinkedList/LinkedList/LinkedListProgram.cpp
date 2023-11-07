#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    cout << "Hello World\n";

    LinkedList list;

    list.InsertNode(3, 1);
    list.InsertNode(3, 2);
    list.InsertNode(3, 3);
    list.InsertNode(3, 4);
    list.InsertNode(3, 5);
    list.InsertNode(3, 6);
    list.InsertNode(3, 7);

    cout << "\nElements are :\n";

    list.PrintList();
    cout << endl;

    string s;
    cin >> s;

    return 0;
}
