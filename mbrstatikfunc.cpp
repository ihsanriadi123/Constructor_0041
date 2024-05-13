#include <iostream>
using namespace std;

class mahasiswa {
    private:
        static int nim;

    public:
        int id;
        string nama;

        void setid();
        void printall();

        static void setnim(int pNim) {nim = pNim;}
        static int getnim() { return nim; }

        mahasiswa(string pnama):nama(pnama) {
            setid();
        }
};

int mahasiswa::nim = 100;

void mahasiswa::setid() {
    id = ++nim;
}

void mahasiswa::printall() {
    cout << "id = " << id << endl;
    cout << "nama = " << nama << endl;
    cout << endl;
}

int main() {
    mahasiswa mhs1("Sri dadi");
    mahasiswa mhs2.("Budi Jatmiko");

    mahasiswa::setnim(9);
    mahasiswa mhs3("Andi Janu");
    mahasiswa mhs4("Joko Wahono");

    mhs1.printall();

    mhs2.printall();
    mhs3.printall();
    mhs4.printall();

    cout << "akses dari luar object = " << mahasiswa::getnim() <<endl;

    return 0;
}