#include <iostream>
using namespace std;
int main()
{
    float bmi;
    int tinggi, berat;

    cout << "Masukkan berat:";
    cin >> berat;
    cout << "Masukkan tinggi:";
    cin >> tinggi;

    {
        if (bmi > 30)
        {
            cout << "ANDA GEMUK";
        }
        else if (bmi >= 18 && bmi >= 25)
        {
            cout << "Berat Badan Normal";
        }

        else if (bmi >= 25 && bmi >= 30)
        {
            cout << "Berat Badan berlebih";
        }

        else if (bmi > 18.5)
        {
            cout << "Berat anda Kurang";
        }
    }
    bmi = (berat / tinggi) * tinggi;
    cout << "BMI Anda: " << bmi << endl;
}
