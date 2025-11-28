#ifndef ALATLABORATORIUM_HPP
#define ALATLABORATORIUM_HPP

#include <string>
using namespace std;

class AlatLaboratorium {
private:
    string nama;
    int jumlah;

public:
    AlatLaboratorium(const string& nama, int jumlah);
    void tambah(int n);
    void kurang(int n);
    void tampil() const;
};

#endif
