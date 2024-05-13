#include <iostream>
using namespace std;

class mahasiswa {
    public:
        static int nim;
        int id;
        string nama;

        void setid();

        void printall();
        mahasiswa(string pnama):nama(pnama) {
            setid();
        }
};

int mahasiswa::nim = 20;

void mahasiswa::setid() {
    id = nim++;
}

void mahasiswa::printall() {
    cout << "id = " << id << endl;
    cout << "nama = " << nama << endl;
    cout << endl;
}

int main() {
    mahasiswa mhs1("Lia Kurnia");
    mahasiswa mhs2("Asroni");
    mahasiswa mhs3("Andi Kurniawan");
    mahasiswa mhs4("Joko Purbo");


    mhs1.printall();

    mhs2.printall();
    mhs3.printall();
    mhs4.printall();
    return 0;
}