#include <iostream>
#include <string>

using namespace std;

// Membuat struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {

    // Array untuk menyimpan maksimal 10 mahasiswa
    Mahasiswa mhs[10];

    int jumlah;

    // Memasukkan jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa (maksimal 10): ";
    cin >> jumlah;

    // Mengecek agar jumlah tidak lebih dari 10
    if (jumlah > 10) {
        cout << "Jumlah mahasiswa maksimal 10." << endl;
        return 0;
    }

    // Input data mahasiswa
    for (int i = 0; i < jumlah; i++) {

        cout << "\nData mahasiswa ke-" << i + 1 << endl;

        cout << "Nama  : ";
        cin >> mhs[i].nama;

        cout << "NIM   : ";
        cin >> mhs[i].nim;

        cout << "UTS   : ";
        cin >> mhs[i].uts;

        cout << "UAS   : ";
        cin >> mhs[i].uas;

        cout << "Tugas : ";
        cin >> mhs[i].tugas;

        // Menghitung nilai akhir menggunakan fungsi
        mhs[i].nilaiAkhir = hitungNilaiAkhir(
            mhs[i].uts,
            mhs[i].uas,
            mhs[i].tugas
        );
    }

    // Menampilkan data mahasiswa
    cout << "\n===== DATA MAHASISWA =====" << endl;

    for (int i = 0; i < jumlah; i++) {

        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama        : " << mhs[i].nama << endl;
        cout << "NIM         : " << mhs[i].nim << endl;
        cout << "UTS         : " << mhs[i].uts << endl;
        cout << "UAS         : " << mhs[i].uas << endl;
        cout << "Tugas       : " << mhs[i].tugas << endl;
        cout << "Nilai Akhir : " << mhs[i].nilaiAkhir << endl;
    }

    return 0;
}