#include <iostream>
using namespace std;

// Prosedur untuk menukar dan mengalikan nilai
void tukar(int &x, int &y) {
    int temp;

    // Menukar nilai x dan y
    temp = x;
    x = y;
    y = temp;

    // Mengalikan nilai setelah ditukar
    x = x * 10;
    y = y * 10;
}

int main() {
    int x, y;

    // Memasukkan nilai x dan y
    cin >> x >> y;

    // Memanggil prosedur
    tukar(x, y);

    // Menampilkan hasil akhir
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}