#include <iostream>
using namespace std;

class mahasiswa{
    public : 
        int nim;
        string nama;

    public : 
        mahasiswa(){
            nim = 0;
            nama = "";
        };

        mahasiswa(int pnim){
            nim = pnim;
        };

        mahasiswa(string pnama){
            nama = pnama;
        };
        mahasiswa(int pnim,string pnama){
            nim = pnim;
            nama = pnama;
        };
        void cetak(){
            cout << "ID   : " << nim << endl;
            cout << "Nama : " << nama << endl;
            cout << endl;
        };
};

int main(){
    mahasiswa mhs1;
    mahasiswa mhs2(20);
    mahasiswa mhs3("Indra");
    mahasiswa mhs4(30,"Fauzan");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();
}