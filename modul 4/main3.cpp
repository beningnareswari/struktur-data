#include <iostream>

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

// Struktur untuk menyimpan data dan pointer berikutnya
struct elmlist {
    infotype info;
    address next;
};

// Struktur linked list
struct List {
    address first;
};

// Membuat list kosong
void createList(List &L) {
    L.first = NULL;
}

// Membuat node baru
address alokasi(infotype x) {
    address P = new elmlist;
    P->info = x;
    P->next = NULL;
    return P;
}

// Menambahkan data ke akhir list
void insertLast(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
    } else {
        address Q = L.first;

        while (Q->next != NULL) {
            Q = Q->next;
        }

        Q->next = P;
    }
}

// Prosedur untuk menghitung jumlah semua elemen
void sum(List L, int &total) {
    address P = L.first;
    total = 0;

    while (P != NULL) {
        total = total + P->info;
        P = P->next;
    }
}

int main() {
    List L;
    int N, x, total;

    createList(L);

    // Memasukkan jumlah elemen
    cin >> N;

    // Memasukkan data ke dalam linked list
    for (int i = 0; i < N; i++) {
        cin >> x;
        insertLast(L, alokasi(x));
    }

    // Menghitung jumlah seluruh elemen
    sum(L, total);

    // Menampilkan hasil penjumlahan
    cout << total << endl;

    return 0;
}