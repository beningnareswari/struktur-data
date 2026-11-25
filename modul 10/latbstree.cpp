#include <iostream>
#include "latbstree.h"
using namespace std;

// Membuat node baru
address alokasi(infotype x) {
    address P = new Node;
    P->info = x;
    P->left = Nil;
    P->right = Nil;
    return P;
}

// Memasukkan data ke dalam BST
void insertNode(address &root, infotype x) {
    if (root == Nil) {
        root = alokasi(x);
    } else if (x < root->info) {
        insertNode(root->left, x);
    } else if (x > root->info) {
        insertNode(root->right, x);
    }
}

// Mencari data dalam BST
address findNode(infotype x, address root) {
    if (root == Nil || root->info == x) {
        return root;
    } else if (x < root->info) {
        return findNode(x, root->left);
    } else {
        return findNode(x, root->right);
    }
}

// Menampilkan data secara inorder
void printInorder(address root) {
    if (root != Nil) {
        printInorder(root->left);
        cout << root->info << " - ";
        printInorder(root->right);
    }
}

// Menghitung jumlah seluruh node
int hitungJumlahNode(address root) {
    if (root == Nil) {
        return 0;
    }

    return 1 + hitungJumlahNode(root->left)
             + hitungJumlahNode(root->right);
}

// Menghitung total nilai seluruh node
int hitungTotalInfo(address root, int start) {
    if (root == Nil) {
        return start;
    }

    start = start + root->info;
    start = hitungTotalInfo(root->left, start);
    start = hitungTotalInfo(root->right, start);

    return start;
}

// Menghitung kedalaman maksimal tree
int hitungKedalaman(address root, int start) {
    if (root == Nil) {
        return start;
    }

    int kiri = hitungKedalaman(root->left, start + 1);
    int kanan = hitungKedalaman(root->right, start + 1);

    if (kiri > kanan) {
        return kiri;
    } else {
        return kanan;
    }
}


// Menampilkan data secara preorder
void printPreorder(address root) {
    if (root != Nil) {
        cout << root->info << " - ";
        printPreorder(root->left);
        printPreorder(root->right);
    }
}

// Menampilkan data secara postorder
void printPostorder(address root) {
    if (root != Nil) {
        printPostorder(root->left);
        printPostorder(root->right);
        cout << root->info << " - ";
    }
}
