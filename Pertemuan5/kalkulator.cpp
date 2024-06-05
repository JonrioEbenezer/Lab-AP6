#include <iostream>
#include "calc.h"
using namespace std;

void garis()
{
    cout << "========================" << endl;
}

void bintang()
{
    cout << "************************" << endl;
}

void menu()
{
    garis();
    cout << "SELAMAT DATANG DI PROGRAM KALKULATOR" << endl;
    garis();
    cout << "1.Tambah\n2.Kurang\n3.Kali\n4.Bagi\n5.Modulo\n6.Pangkat\n" << endl;
    garis();
}
int main()
{
    char cont;
    do
    {
        system("cls");
        int operasi,a, b;
        float hasil;

        menu();
        cout << "Masukkan operasi: ";
        cin >> operasi;
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;

        switch (operasi)
        {
        case 1:
            hasil =tambah(a,b);
            break;
        case 2:
            hasil = kurang(a,b);
            break;
        case 3:
            hasil = kali(a,b);
            break;
        case 4
            hasil = bagi(a,b);
            break;
        case 5:
            hasil = modulo(a,b);
            break;
        case 6:
            hasil = pangkat(a,b);
            break;
        }
        cout << "Hasil: " << hasil << endl;
        cout << "Apakah anda ingin melanjutkan? (y/n): ";
        cin >> cont;

    } while (toupper(cont) == 'Y');
    cout << "Terima kasih telah menggunakan program ini" << endl;
    return 0;
}