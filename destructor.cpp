#include <iostream>
using namespace std;

class angka{
    private : 
        int *arr;
        int panjang;
    public : 
        angka(int);
        ~angka();
        void cetak();
        void isi();
};

angka :: angka(int i) {
    panjang = i;
    arr = new int[i];
    isi();
}