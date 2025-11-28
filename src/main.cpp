#include <iostream>
#include <vector>
#include "AlatLaboratorium.hpp"
using namespace std;

int main() {
    vector<AlatLaboratorium> daftar;

    int n;
    cout << "Berapa alat yang ingin dibuat? ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string nama;
        int jumlah;

        cout << "\nNama alat: ";
        getline(cin, nama);

        cout << "Jumlah: ";
        cin >> jumlah;
        cin.ignore();

        daftar.emplace_back(nama, jumlah);
    }

    cout << "\n=== Daftar Alat ===\n";
    for (auto& alat : daftar) {
        alat.tampil();
        cout << endl;
    }

    // Contoh penambahan/pengurangan
    if (!daftar.empty()) {
        cout << "Menambah jumlah alat pertama sebanyak 2...\n";
        daftar[0].tambah(2);

        cout << "Mengurangi jumlah alat pertama sebanyak 1...\n";
        daftar[0].kurang(1);
    }

    cout << "\n=== Setelah Update ===\n";
    for (auto& alat : daftar) {
        alat.tampil();
        cout << endl;
    }

    return 0;
}
