#include <iostream>
#include <string>

using namespace std;

typedef struct Buku infotype;
typedef struct elmlist *address;

// Struktur data buku
struct Buku {
    string judul;
    int tahun;
};

// Struktur node
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

// Membuat node buku baru
address alokasi(infotype x) {
    address P = new elmlist;
    P->info = x;
    P->next = NULL;
    return P;
}

// Menambahkan buku ke akhir list
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

// Menghapus buku terakhir
void deleteLast(List &L, address &P) {
    P = NULL;

    if (L.first != NULL) {
        // Jika hanya ada satu buku
        if (L.first->next == NULL) {
            P = L.first;
            L.first = NULL;
        } else {
            address Q = L.first;

            // Mencari node sebelum node terakhir
            while (Q->next->next != NULL) {
                Q = Q->next;
            }

            P = Q->next;
            Q->next = NULL;
        }
    }
}

// Menampilkan daftar buku
void printInfo(List L) {
    address P = L.first;

    cout << "Daftar Buku:" << endl;

    if (P == NULL) {
        cout << "Tidak ada buku." << endl;
    }

    while (P != NULL) {
        cout << P->info.judul
             << " (" << P->info.tahun << ")" << endl;

        P = P->next;
    }
}

int main() {
    List L;
    Buku B;
    address P;
    int N;

    createList(L);

    // Memasukkan jumlah buku
    cout << "Jumlah buku: ";
    cin >> N;
    cin.ignore();

    // Memasukkan data setiap buku
    for (int i = 0; i < N; i++) {
        cout << "Judul buku: ";
        getline(cin, B.judul);

        cout << "Tahun terbit: ";
        cin >> B.tahun;
        cin.ignore();

        P = alokasi(B);
        insertLast(L, P);
    }

    // Menghapus buku terakhir
    deleteLast(L, P);

    if (P != NULL) {
        cout << "\nBuku yang dihapus: "
             << P->info.judul << endl;

        delete P;
        P = NULL;
    }

    // Menampilkan buku yang tersisa
    cout << endl;
    printInfo(L);

    return 0;
}