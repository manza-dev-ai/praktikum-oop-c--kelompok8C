#include "AlatLaboratorium.hpp"
#include <iostream>
using namespace std;

AlatLaboratorium::AlatLaboratorium(const string& nama, int jumlah) {
    this->nama = nama;
    this->jumlah = jumlah;
}

void AlatLaboratorium::tambah(int n) {
    jumlah += n;
}

void AlatLaboratorium::kurang(int n) {
    if (jumlah - n >= 0) jumlah -= n;
    else cout << "Jumlah tidak mencukupi!\n";
}

void AlatLaboratorium::tampil() const {
    cout << "Nama Alat : " << nama << endl;
    cout << "Jumlah    : " << jumlah << endl;
}
