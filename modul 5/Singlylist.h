#ifndef SINGLYLIST_H
#define SINGLYLIST_H

// Tipe data yang disimpan adalah integer
typedef int infotype;

// address merupakan pointer ke node
typedef struct ElmList *address;

// Struktur untuk setiap node
struct ElmList {
    infotype info;
    address next;
};

// Struktur Singly Linked List
struct List {
    address first;
};

// Deklarasi fungsi-fungsi
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

// Fungsi pencarian elemen
address findElm(List L, infotype x);

// Fungsi menghitung jumlah seluruh elemen
int sum(List L);

#endif
