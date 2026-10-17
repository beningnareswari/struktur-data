#include <iostream>
#include <string>

using namespace std;

// Tipe data yang disimpan adalah nama nasabah
typedef string infotype;
typedef struct elmlist *address;

// Struktur untuk setiap node
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

// Menghapus node dari memori
void dealokasi(address &P) {
    delete P;
    P = NULL;
}

// Menambahkan nasabah di akhir antrean
void insertLast(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
    } else {
        address Q = L.first;

        // Mencari node terakhir
        while (Q->next != NULL) {
            Q = Q->next;
        }

        // Menghubungkan node baru ke akhir list
        Q->next = P;
    }
}

// Mengambil nasabah paling depan
void deleteFirst(List &L, address &P) {
    P = NULL;

    if (L.first != NULL) {
        P = L.first;
        L.first = P->next;
        P->next = NULL;
    }
}

// Menampilkan antrean saat ini
void printInfo(List L) {
    address P = L.first;

    cout << "Antrean: ";

    if (P == NULL) {
        cout << "Kosong";
    } else {
        while (P != NULL) {
            cout << P->info;

            if (P->next != NULL) {
                cout << " -> ";
            }

            P = P->next;
        }
    }

    cout << endl;
}

int main() {
    List L;
    int pilihan;
    string nama;

    createList(L);

    do {
        cout << "\n=== ANTREAN NASABAH BANK ===" << endl;
        cout << "1. Tambah nasabah" << endl;
        cout << "2. Layani nasabah" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan nama nasabah: ";
            getline(cin >> ws, nama);

            address P = alokasi(nama);
            insertLast(L, P);

            printInfo(L);

        } else if (pilihan == 2) {
            address P = NULL;
            deleteFirst(L, P);

            if (P != NULL) {
                cout << "Melayani: " << P->info << endl;
                dealokasi(P);
                printInfo(L);
            } else {
                cout << "Antrean kosong, tidak ada nasabah yang dilayani." << endl;
            }

        } else if (pilihan == 3) {
            cout << "Program selesai." << endl;

        } else {
            cout << "Pilihan tidak valid." << endl;
        }

    } while (pilihan != 3);

    return 0;
}