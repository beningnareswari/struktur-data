#include <iostream>
using namespace std ;

//A. Pemanggulan dengan nilai call by value (cuma disalin, data asli aman)
void tukarValue(int x, int y) {
    int temp = x ;
    x = y ;
    y = temp ;
}

//B. Pemanggilan dengan Pointer (alamat dikirim pakai pointer, data asli berubah)
void tukarPointer(int *px, int *py) {
    int temp = *px ;
    *px = *py ;
    *py = temp ;
}

//C. Pemanggilan dengan referensi (paling clean, data asli ikut berubah)
void tukarReference(int &px, int &py) {
    int temp = px ;
    px = py ;
    py = temp ;
}

int main() {
    int a = 4, b = 6 ;

    cout << "Kondisi Awal -> a: " << a << " b: " << b << endl ;

    //Test call by Value
    tukarValue(a, b) ;
    cout << "Setelah tukarValue -> a: " << a << " b: " << b << endl ;
    //Hasil: a dan b tetep 4 dan 6!

    //Test call by Pointer
    tukarPointer(&a, &b) ;
    cout << "Setelah tukarPointer -> a: " << a << " b: " << b << endl ;
    //Hasil: a jadi 6, b jadi 4! (Berhasil ditukar)

    //Test call by Reference (kita tukar balik kondisinya)
    tukarReference(a, b) ;
    cout << "Setelah tukarReference -> a: " << a << " b: " << b << endl ;
    //Hasil: a jadi 4, b jadi 6! (Berhasil ditukar lagi)

    return 0 ;

}