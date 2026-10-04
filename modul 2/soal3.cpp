#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menghitung jumlah kemunculan karakter
int hitungKarakter(string kata, char karakter) {
    int jumlah = 0;

    // Mengecek setiap karakter dalam kata
    for (int i = 0; i < kata.length(); i++) {
        if (kata[i] == karakter) {
            jumlah++;
        }
    }

    // Mengembalikan jumlah kemunculan
    return jumlah;
}

int main() {
    string kata;
    char karakter;

    // Memasukkan kata
    cin >> kata;

    // Memasukkan karakter yang ingin dicari
    cin >> karakter;

    // Memanggil fungsi dan menampilkan hasilnya
    cout << hitungKarakter(kata, karakter) << endl;

    return 0;
}