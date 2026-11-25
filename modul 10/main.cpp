#include <iostream>
#include "latbstree.h"
using namespace std;

int main() {
    cout << "Hello World" << endl;

    address root = Nil;

    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 6);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 6);
    insertNode(root, 7);

    cout << "Inorder : ";
    printInorder(root);
    cout << endl;

    address P = findNode(4, root);

    if (P != Nil) {
        cout << "Data 4 ditemukan" << endl;
    } else {
        cout << "Data 4 tidak ditemukan" << endl;
    }

    return 0;
}
