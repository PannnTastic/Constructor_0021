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
};