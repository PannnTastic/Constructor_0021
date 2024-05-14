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

    mahasiswa(string pnama)
    {
        nama = pnama;
        setid();
    }
};

int mahasiswa::nim = 0;

void mahasiswa ::setid()
{
    id = ++nim;
}

void mahasiswa ::printall()
{
    cout << "ID   : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
}

int main()
{

    mahasiswa mhs1("Lia Kurnia");
    mahasiswa mhs2("Asroni");

    mahasiswa :: setnim(9);

    mahasiswa mhs3("Andi Kurniawan");
    mahasiswa mhs4("Joko Purbo");

    mhs1.printall();
    mhs2.printall();
    mhs3.printall();
    mhs4.printall();
}