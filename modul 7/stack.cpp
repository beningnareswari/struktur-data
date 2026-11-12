
#include <iostream>
#include "stack.h"
using namespace std;

// Membuat Stack kosong
void createStack(Stack &S) {
    S.Top = 0;
}

// Memasukkan data ke dalam Stack
void push(Stack &S, infotype X) {
    if (S.Top < 20) {
        S.info[S.Top] = X;
        S.Top++;
    }
}

// Mengeluarkan data paling atas dari Stack
infotype pop(Stack &S) {
    if (S.Top > 0) {
        S.Top--;
        return S.info[S.Top];
    }

    return -1; // Jika Stack kosong
}

// Menampilkan isi Stack dari atas ke bawah
void printInfo(Stack S) {
    int i = S.Top - 1;

    while (i >= 0) {
        cout << S.info[i] << endl;
        i--;
    }
}

// Membalik urutan isi Stack
void balikStack(Stack &S) {
    int kiri = 0;
    int kanan = S.Top - 1;

    // Menukar data dari kedua ujung
    while (kiri < kanan) {
        int temp = S.info[kiri];
        S.info[kiri] = S.info[kanan];
        S.info[kanan] = temp;

        kiri++;
        kanan--;
    }
}

// Memasukkan angka secara ascending
void pushAscending(Stack &S, infotype X) {
    Stack T;
    createStack(T);

    // Memindahkan angka yang lebih kecil ke Stack sementara
    while (S.Top > 0 && S.info[S.Top - 1] < X) {
        push(T, pop(S));
    }

    // Memasukkan angka baru
    push(S, X);

    // Mengembalikan angka dari Stack sementara
    while (T.Top > 0) {
        push(S, pop(T));
    }
}


// Membaca input pengguna sampai menekan Enter
void getInputStream(Stack &S) {
    char angka;

    cout << "Masukkan angka (akhiri dengan Enter): ";

    while (cin.get(angka) && angka != '\n') {

        // Memeriksa apakah karakter berupa angka
        if (angka >= '0' && angka <= '9') {
            push(S, angka - '0');
        }
    }
}
