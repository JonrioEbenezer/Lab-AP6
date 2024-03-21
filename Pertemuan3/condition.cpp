#include <iostream>

using namespace std;
int main()
{
    int nilai;
    cout << "MASUKKAN NILAI MU:";
    cin >> nilai;
    //     // if statement
    //     if (nilai < 65)
    //     {
    //         cout << "Tidak lulus" << endl;
    //     }
    //     // if else statement

    //     if (nilai < 65)
    //     {
    //         cout << "Tidak LULUS" << endl;
    //     }
    //     else
    //     {
    //         cout << "LULUS" << endl;
    //     }

    //     // if else if statemetn

    //     if (nilai < 65)
    //     {
    //         cout << "Tidak LULUS" << endl;
    //     }
    //     else if (nilai > 65)
    //     {
    //         cout << "LULUS" << endl;
    //     }
    //     else if (nilai == 65)
    //     {
    //         cout << "NILAI MU PAS" << endl;
    //     }

    //     // nested if

    //     //<0->Tidak _Valid_
    //     //>100 ->TIDAK _Valid

    //     if (nilai < 0 || nilai > 100)
    //     {
    //         cout << "TIDAK VALID" << endl;
    //     }
    //     else
    //     {
    //         if (nilai < 65)
    //         {
    //             cout << "Tidak LULUS" << endl;
    //         }
    //         else if (nilai > 65)
    //         {
    //             cout << "LULUS" << endl;
    //         }
    //         else if (nilai == 65)
    //         {
    //             cout << "NILAI MU PAS" << endl;
    //         }
    //     }
    //     // swtich

    //     switch (nilai)
    //     {
    //     case 1:
    //         cout << "Senin" << endl;
    //         break;
    //     case 2:
    //         cout << "Selasa" << endl;
    //         break;
    //     case 3:
    //         cout << "Rabu" << endl;
    //         break;
    //     case 4:
    //         cout << "Kamis" << endl;
    //         break;
    //     case 5:
    //         cout << "Jumat" << endl;
    //         break;
    //     case 6:
    //         cout << "Sabtu" << endl;
    //         break;
    //     case 7:
    //         cout << "Minggu" << endl;
    //         break;
    //     default:
    //         cout << "TIDAK VALID";
    //         break; // optional
    //     }

    // switch case for range

    // switch (nilai)
    // {
    // case 90 ... 100:
    //     cout << "A" << endl;
    // case 85 ... 89:
    //     cout << "B+" << endl;
    // case 80 ... 84:
    //     cout << "B" << endl;
    // case 75 ... 79:
    //     cout << "C+" << endl;
    // case 70 ... 74:
    //     cout << "C" << endl;
    // case 65 ... 69:
    //     cout << "D" << endl;
    // case 0 ... 64:
    //     cout << "E" << endl;
    // default:
    //     cout << "TIDAK VALID";
    // }

    //Ternary Operator
    if(nilai<0){
        cout<<"Negatif"<<endl;
    }else{
        cout<<"Positif"<<endl;
    }
        string tipe=(nilai>0)?"Positif" :"Negatif";
        cout<<tipe<<endl;
}