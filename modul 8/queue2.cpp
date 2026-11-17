#include <iostream>
#include "queue2.h"
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
    return Q.tail == NMax - 1 && Q.head == 0;
}

// Menambahkan data ke bagian belakang Queue
void enqueue(Queue &Q, infotype x) {
    if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
        Q.info[Q.tail] = x;
    } else {
        if (Q.tail == NMax - 1) {
            if (Q.head > 0) {
                int j = 0;

                for (int i = Q.head; i <= Q.tail; i++) {
                    Q.info[j] = Q.info[i];
                    j++;
                }

                Q.tail = j - 1;
                Q.head = 0;
            }
        }

        if (Q.tail == NMax - 1) {
            cout << "Queue penuh" << endl;
        } else {
            Q.tail++;
            Q.info[Q.tail] = x;
        }
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
        Q.head++;
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
