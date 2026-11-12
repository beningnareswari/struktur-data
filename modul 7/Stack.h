
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

// Tipe data yang disimpan adalah integer
typedef int infotype;

// Struktur Stack menggunakan array
struct Stack {
    infotype info[20]; // Menyimpan maksimal 20 data
    int Top;           // Menunjukkan jumlah data dalam Stack
};

// Deklarasi fungsi
void createStack(Stack &S);
void push(Stack &S, infotype X);
infotype pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);

// Fungsi tambahan untuk soal nomor 2 dan 3
void pushAscending(Stack &S, infotype X);
void getInputStream(Stack &S);

void pushAscending(Stack &S, infotype X);

void getInputStream(Stack &S);

#endif
