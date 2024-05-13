#include <iostream>
using namespace std;

class mahasiswa {
    public:
        int nim;
        string nama;

    public:
        mahasiswa() {
            nim = 0;
            nama = "";
        };
        mahasiswa(int iNim) {
            nim = iNim;
        };
        mahasiswa(string);
        mahasiswa(int iNim, string iNama);
        void cetak();
};

mahasiswa::mahasiswa(string iNama) {
    nama = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama) {
    nim = iNim;
    nama = iNama;
};

void mahasiswa::cetak() {
    cout << "nim = " << nim << endl;
    cout << "nama = " << nama << endl;
    cout << endl;
}


int main() {
    mahasiswa mhs1;
    mahasiswa mhs2(20);
    mahasiswa mhs3("Ronaldo");
    mahasiswa mhs4(30, "Messi");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    return 0;
}

