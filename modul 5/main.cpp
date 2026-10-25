#include <iostream>
#include "Singlylist.h"
using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5, P;
    int total;

    // Membuat list kosong
    createList(L);

    // Membuat node dan memasukkannya ke awal list
    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    // Menampilkan isi list
    cout << "Isi list: ";
    printInfo(L);

    // Mencari elemen bernilai 8
    P = findElm(L, 8);

    if (P != NULL) {
        cout << "Elemen 8 ditemukan." << endl;
    } else {
        cout << "Elemen 8 tidak ditemukan." << endl;
    }

    // Menghitung jumlah seluruh elemen
    total = sum(L);
    cout << "Jumlah total: " << total << endl;

    // Membebaskan memori semua node
    while (L.first != NULL) {
        P = L.first;
        L.first = L.first->next;
        dealokasi(P);
    }

    return 0;
}
