#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Memasukkan jumlah mahasiswa
    cin >> n;

    int nilai[n];
    int total = 0;

    // Memasukkan nilai mahasiswa
    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }

    // Menghitung rata-rata
    // Karena total dan n bertipe int, hasilnya dibulatkan ke bawah
    int rataRata = total / n;

    int jumlah = 0;

    // Menghitung mahasiswa yang nilainya di atas rata-rata
    for (int i = 0; i < n; i++) {
        if (nilai[i] > rataRata) {
            jumlah++;
        }
    }

    // Menampilkan hasil
    cout << "Rata-rata: " << rataRata << endl;
    cout << "Di atas rata-rata: " << jumlah << endl;

    return 0;
}