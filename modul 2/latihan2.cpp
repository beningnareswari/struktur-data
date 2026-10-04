#include <iostream>
using namespace std ;

//ini FUNGSI (punya return)
int maks3(int a, int b, int c) {
    int temp_max = a ;
    if (b > temp_max) {
        temp_max = b ;
    }
    if (c > temp_max) {
        temp_max = c ;
    }
    return temp_max ;
}

//PROSEDUR (pakai void, tidak punya return value)
void tulis(int x) {
    for (int i = 0 ; i < x; i++) {
        cout << "baris ke-" << i + 1 << endl ;
    }
}

int main() {
    //Manggil fungsi, nilainya bisa disimpan ke variabel
    int hasil_maks = maks3(10, 50, 30) ;
    cout << "Nilai mksimumnya adalah = " << hasil_maks << endl ;

    //Manggil prosedur, dia langsung jalanin tugasnya aja
    cout << "Mulai panggil prosedur: " << endl ;
    tulis(3) ;

    return 0 ;
}