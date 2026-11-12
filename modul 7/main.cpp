
#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    Stack S;

    // Membuat Stack kosong
    createStack(S);

    // Memasukkan data ke Stack
    push(S, 3);
    push(S, 4);
    push(S, 8);

    // Mengeluarkan satu data paling atas
    pop(S);

    push(S, 2);
    push(S, 3);

    pop(S);

    push(S, 9);

    // Menampilkan isi Stack
    cout << "Isi Stack:" << endl;
    printInfo(S);

    // Membalik isi Stack
    cout << "Balik Stack:" << endl;
    balikStack(S);

    // Menampilkan Stack setelah dibalik
    printInfo(S);

    return 0;
}
