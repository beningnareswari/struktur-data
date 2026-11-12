
#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    Stack S;

    // Membuat Stack kosong
    createStack(S);

    // Memasukkan angka secara ascending
    pushAscending(S, 3);
    pushAscending(S, 4);
    pushAscending(S, 8);
    pushAscending(S, 2);
    pushAscending(S, 3);
    pushAscending(S, 9);

    // Menampilkan isi Stack
    cout << "Isi Stack Ascending:" << endl;
    printInfo(S);

    // Membalik urutan Stack
    cout << "Balik Stack:" << endl;
    balikStack(S);

    // Menampilkan hasil setelah dibalik
    printInfo(S);

    return 0;
}
