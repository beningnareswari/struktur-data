#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input: ";
    cin >> n;

    cout << "Output:" << endl;

    // Perulangan untuk setiap baris
    for (int i = n; i >= 1; i--) {

        // Membuat jarak di awal baris
        for (int spasi = n; spasi > i; spasi--) {
            cout << "  ";
        }

        // Menampilkan angka dari i sampai 1
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Menampilkan tanda *
        cout << "* ";

        // Menampilkan angka dari 1 sampai i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    // Baris terakhir hanya tanda *
    for (int spasi = 0; spasi < n; spasi++) {
        cout << "  ";
    }

    cout << "*";

    return 0;
}