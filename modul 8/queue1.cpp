#include <iostream>
#include "queue1.h"
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
    return Q.tail == NMax - 1;
}

// Menambahkan data ke bagian belakang Queue
void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh" << endl;
    } else {
        if (isEmptyQueue(Q)) {
            Q.head = 0;
        }

        Q.tail++;
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

    for (int i = Q.head; i < Q.tail; i++) {
        Q.info[i] = Q.info[i + 1];
    }

    Q.tail--;

    if (Q.tail == -1) {
        Q.head = -1;
    }

    return x;
}

// Menampilkan isi Queue
void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << "\t | ";

    if (isEmptyQueue(Q)) {
        cout << "Queue kosong";
    } else {
        for (int i = Q.head; i <= Q.tail; i++) {
            cout << Q.info[i] << " ";
        }
    }

    cout << endl;
}
