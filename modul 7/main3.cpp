
#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    Stack S;

    // Membuat Stack kosong
    createStack(S);

    // Menerima input dari pengguna
    getInputStream(S);

    // Menampilkan isi Stack
    cout << "\nIsi Stack:" << endl;
    printInfo(S);

    // Membalik isi Stack
    cout << "Balik Stack:" << endl;
    balikStack(S);

    // Menampilkan hasil setelah dibalik
    printInfo(S);

    return 0;
}
