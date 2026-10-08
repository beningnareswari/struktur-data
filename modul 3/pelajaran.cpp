#include <iostream>
#include "pelajaran.h"

using namespace std;

// Implementasi fungsi create_pelajaran
Pelajaran create_pelajaran(string namapel, string kodepel) {
    Pelajaran pel;

    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;

    return pel;
}

// Implementasi prosedur tampil_pelajaran
void tampil_pelajaran(Pelajaran pel) {
    cout << "nama pelajaran : " << pel.namaMapel << endl;
    cout << "nilai          : " << pel.kodeMapel << endl;
}