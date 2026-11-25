#include <iostream>
#include "latbstree.h"
using namespace std;

int main() {
    cout << "Hello World" << endl;

    address root = Nil;

    insertNode(root, 6);
    insertNode(root, 4);
    insertNode(root, 7);
    insertNode(root, 2);
    insertNode(root, 5);
    insertNode(root, 1);
    insertNode(root, 3);

    cout << "Preorder : ";
    printPreorder(root);
    cout << endl;

    cout << "Postorder : ";
    printPostorder(root);
    cout << endl;

    return 0;
}