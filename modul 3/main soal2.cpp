#include <iostream>
#include "pelajaran.h"

using namespace std;

int main() {

    // Menentukan nama dan kode mata kuliah
    string namapel = "Struktur Data";
    string kodepel = "STD";

    // Membuat data pelajaran menggunakan fungsi
    Pelajaran pel = create_pelajaran(namapel, kodepel);

    // Menampilkan data pelajaran
    tampil_pelajaran(pel);

    return 0;
}