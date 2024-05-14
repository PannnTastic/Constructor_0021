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
        mahasiswa(string pnama,int pnim){
            nim = pnim;
            nama = pnama;
        };
};