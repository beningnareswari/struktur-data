#include <iostream>
#include "queue3.h"
using namespace std;

// Membuat Queue dalam keadaan kosong
void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

// Mengecek apakah Queue kosong
bool isEmptyQueue(Queue Q) {
    return Q.head == -1;
}

// Mengecek apakah Queue penuh
bool isFullQueue(Queue Q) {
    return !isEmptyQueue(Q) &&
           (Q.tail + 1) % NMax == Q.head;
}

// Menambahkan data ke bagian belakang Queue
void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh" << endl;
    } else {
        if (isEmptyQueue(Q)) {
            Q.head = 0;
            Q.tail = 0;
        } else {
            Q.tail = (Q.tail + 1) % NMax;
        }

        Q.info[Q.tail] = x;
    }
}

// Menghapus data dari bagian depan Queue
infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong" << endl;
        return -1;
    }

    infotype x = Q.info[Q.head];

    if (Q.head == Q.tail) {
        Q.head = -1;
        Q.tail = -1;
    } else {
        Q.head = (Q.head + 1) % NMax;
    }

    return x;
}

// Menampilkan isi Queue
void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << "\t | ";

    if (isEmptyQueue(Q)) {
        cout << "Queue kosong";
    } else {
        int i = Q.head;

        while (true) {
            cout << Q.info[i] << " ";

            if (i == Q.tail) {
                break;
            }

            i = (i + 1) % NMax;
        }
    }

    cout << endl;
}
