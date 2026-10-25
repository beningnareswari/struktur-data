#include <iostream>
#include "Singlylist.h"
using namespace std;

// Membuat list kosong
void createList(List &L) {
    L.first = NULL;
}

// Membuat node baru dan mengisi nilainya
address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    return P;
}

// Menghapus node dan membebaskan memorinya
void dealokasi(address &P) {
    delete P;
    P = NULL;
}

// Menampilkan seluruh isi list
void printInfo(List L) {
    address P = L.first;

    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }

    cout << endl;
}

// Menambahkan node di awal list
void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

// Mencari node yang memiliki nilai x
address findElm(List L, infotype x) {
    address P = L.first;

    while (P != NULL) {
        if (P->info == x) {
            return P;
        }

        P = P->next;
    }

    // Mengembalikan NULL jika nilai tidak ditemukan
    return NULL;
}

// Menghitung jumlah seluruh nilai dalam list
int sum(List L) {
    address P = L.first;
    int total = 0;

    while (P != NULL) {
        total = total + P->info;
        P = P->next;
    }

    return total;
}
