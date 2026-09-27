#include <iostream>
#include <string>
using namespace std;

int main() {
    int angka;

    // Array untuk menyimpan nama angka
    string satuan[] = {
        "nol", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan"
    };

    string belasan[] = {
        "sepuluh", "sebelas", "dua belas", "tiga belas",
        "empat belas", "lima belas", "enam belas",
        "tujuh belas", "delapan belas", "sembilan belas"
    };

    string puluhan[] = {
        "", "", "dua puluh", "tiga puluh", "empat puluh",
        "lima puluh", "enam puluh", "tujuh puluh",
        "delapan puluh", "sembilan puluh"
    };

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka harus dari 0 sampai 100.";
    }
    else if (angka < 10) {
        cout << satuan[angka];
    }
    else if (angka < 20) {
        cout << belasan[angka - 10];
    }
    else if (angka < 100) {
        cout << puluhan[angka / 10];

        if (angka % 10 != 0) {
            cout << " " << satuan[angka % 10];
        }
    }
    else {
        cout << "seratus";
    }

    return 0;
}