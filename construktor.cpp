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

}
