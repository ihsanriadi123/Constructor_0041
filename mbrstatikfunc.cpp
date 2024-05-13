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
        
}