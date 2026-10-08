#include <iostream>

using namespace std;

// Fungsi untuk menampilkan isi array 2D
void tampilArray(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menukar isi dua array pada posisi tertentu
void tukarArray(int array1[3][3], int array2[3][3], int baris, int kolom) {
    int sementara;

    sementara = array1[baris][kolom];
    array1[baris][kolom] = array2[baris][kolom];
    array2[baris][kolom] = sementara;
}

// Fungsi ntuk menukar nilai yang ditunjuk oleh dua pointer
void tukarPointer(int *p1, int *p2) {
    int sementara;

    sementara = *p1;
    *p1 = *p2;
    *p2 = sementara;
}

int main() {

    // Dua array integer 2D berukuran 3x3
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };

    // Nampilin array sebelum ditukar
    cout << "Array 1 sebelum ditukar:" << endl;
    tampilArray(array1);

    cout << "\nArray 2 sebelum ditukar:" << endl;
    tampilArray(array2);

    // nukar isi array pada posisi baris 1 kolom 1
    // Posisi 1,1 berarti angka 5 pada array1 dan 14 pada array2
    tukarArray(array1, array2, 1, 1);

    cout << "\nArray 1 setelah ditukar:" << endl;
    tampilArray(array1);

    cout << "\nArray 2 setelah ditukar:" << endl;
    tampilArray(array2);

    // Dua var integer
    int a = 20;
    int b = 50;

    // Membuat dua pointer yang menunjuk ke a dan b
    int *p1 = &a;
    int *p2 = &b;

    cout << "\nSebelum pointer ditukar:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // nukar nilai yang ditunjuk oleh pointer
    tukarPointer(p1, p2);

    cout << "\nSetelah pointer ditukar:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
