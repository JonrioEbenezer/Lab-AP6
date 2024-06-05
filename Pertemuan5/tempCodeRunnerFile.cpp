#include <iostream>
using namespace std;

// integer tambah/function yang memliki nilai kembalian

int tambah()
{
    return 2 + 3;
}

int tambah(int a, int b)
{
    return a + b;
}
int kurang(int a, int b)
{
    return a - b;
}
int kali(int a, int b)
{
    return a * b;
}
float bagi(int a, int b) return a / b;

// produre== fungsi yang tidak memiliki nilai kembalian
void sayHello()
{
    cout << "Hello World" << endl;
}
int main()
{
    system("cls");
    int hasil = tambah();
    cout << tambah(2, 3) << endl;
    cout << kurang(2, 3) << endl;
    cout << kali(2, 3) << endl;
    cout << bagi(2, 3) << endl;
    return 0;
}