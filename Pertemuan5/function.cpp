#include <iostream>
#include "operasi.h"
#include "preprocesor.h"
uns;
void sayHello(string name)
{
    cout << "Hello " << name << endl;
}

void garis()
{
    cout << "====================" << endl;
}
void bintang()
{
    cout << "*********************" << endl;
}

int main()
{
    system("cls");
    sayHello("AP6");
    garis();
    bintang();
    int hasil = tambah();
    cout << tambah(2, 3) << endl;
    cout << kurang(2, 3) << endl;
    cout << kali(2, 3) << endl;
    cout << bagi(2, 3) << endl;
    cout << PI << endl;
    return 0;
}
