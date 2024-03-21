#include <iostream>
using namespace;
int main()
{
    float bmi;
    int tinggi, berat;

    bmi = (berat / tinggi) * tinggi;

    cout << "Masukkan berat"<<endl;
    cin>>berat;
    cout << "Masukkan tinggi"<<endl;
    cin>>tinggi;


    switch (bmi)
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
            cout << "Berat anda Kurang"
        }
    }
}
    
