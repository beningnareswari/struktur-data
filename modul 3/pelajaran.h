#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED

#include <string>

using namespace std;

// Membuat tipe data Pelajaran
struct Pelajaran {
    string namaMapel;
    string kodeMapel;
};

// Deklarasi fungsi dan prosedur
Pelajaran create_pelajaran(string namapel, string kodepel);
void tampil_pelajaran(Pelajaran pel);

#endif