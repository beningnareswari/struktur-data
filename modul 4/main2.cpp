#include <iostream>

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

// Struktur node
struct elmlist {
    infotype info;
    address next;
};

// Struktur list
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

// Menambahkan data di akhir list
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

// Mencari data di dalam list
address cariData(List L, infotype x) {
    address P = L.first;

    while (P != NULL) {
        if (P->info == x) {
            return P;
        }

        P = P->next;
    }

    return NULL;
}

// Menyisipkan node setelah data yang ditemukan
void insertAfter(List &L, address P, address Prec) {
    if (Prec != NULL) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

// Menampilkan isi list
void printInfo(List L) {
    address P = L.first;

    while (P != NULL) {
        cout << P->info;

        if (P->next != NULL) {
            cout << " -> ";
        }

        P = P->next;
    }

    cout << endl;
}

int main() {
    List L;
    int N, x, dataBaru;

    createList(L);

    // Memasukkan jumlah elemen
    cin >> N;

    // Memasukkan data awal ke dalam list
    for (int i = 0; i < N; i++) {
        cin >> x;
        insertLast(L, alokasi(x));
    }

    // Memasukkan angka yang dicari
    int dicari;
    cin >> dicari;

    // Memasukkan angka baru
    cin >> dataBaru;

    // Mencari posisi angka
    address Prec = cariData(L, dicari);

    if (Prec != NULL) {
        // Membuat node baru dan menyisipkannya
        address P = alokasi(dataBaru);
        insertAfter(L, P, Prec);
    }

    // Menampilkan list setelah proses penyisipan
    printInfo(L);

    return 0;
}