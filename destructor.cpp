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

angka ::~angka(){
    cout << endl;
    cetak();
    delete[]arr;
    cout << "Alamat array sudah dilepaskan" << endl;
}

void angka :: cetak(){
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << "= " << arr[i] << endl;
    }
}

void angka :: isi(){
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << "= ";
        cin >> arr[i];
    }

    cout << endl;
    
}

int main(){
    angka belajarcpp(3);
    angka *ptrbelajarcpp = new angka (5);
}