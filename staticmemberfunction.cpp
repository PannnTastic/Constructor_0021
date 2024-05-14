#include <iostream>
using namespace std;

class mahasiswa
{
private:
    static int nim;

public:
    int id;
    string nama;

    void setid();

    void printall();

    static void setnim(int pnim) { nim = pnim; }

    static int getnim() { return nim; }

    mahasiswa (string pnama){
        nama = pnama;
        setid();
    }
};

int mahasiswa::nim = 0;

void mahasiswa ::setid(){
    id = ++nim;
}

void mahasiswa :: printall(){
    cout << "ID   : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
}