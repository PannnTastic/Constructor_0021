#include <iostream>
using namespace std;

class mahasiswa
{
public:
    static int nim;
    int id;
    string nama;

    void setid();

    void printall();

    mahasiswa(string pnama)
    {
        nama = pnama;
    }
};

int mahasiswa::nim = 113;

void mahasiswa ::setid()
{
    id = ++nim;
}

void mahasiswa::printall()
{
    cout << "ID   " << id << endl;
    cout << "Nama " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Lia Kurnia");
    mahasiswa mhs2("Asroni");
    mahasiswa mhs3("Andi Kurniawan");
    mahasiswa mhs4("Joko Purbo");
}