#include <iostream>
using namespace std;
int main()
{
    system("cls");
    // arrya declaration and initialization
    //  string nama[5]={"Andi","Budi","Santi","Wanti","Dennis"};
    //  nama[0] = "Andi";
    //  nama[1] = "Budi";
    //  nama[2] = "Santi";
    //  nama[3] = "Wanti";
    //  nama[4] = "Dennis";

    // Accessing array elements
    // cout<<nama[0]<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;

    // for(int  i=0; i<5; i++){
    //     cout<<nama[i]<<endl;
    // }

    // Multi-dimensional array
    //  int matrix[2][2]={{1,3},{2,4}};
    //  cout<<matrix[0][0]<<endl;
    //  cout<<matrix[0][1]<<endl;
    //  cout<<matrix[1][0]<<endl;
    //  cout<<matrix[1][1]<<endl;

    // for(int i=0; i<2; i++){
    //     for(int j=0; j<2; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }

    //? String(array of characters)

    // string nama="Jonrio";
    // cout<<nama<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;
    // cout<<nama[5]<<endl;

    // for(int i=0; i<3; i++){
    //     cout<<nama[i]<<endl;
    // }

    //    for(int i=0; i<nama.length(); i++){
    //        cout<<nama[i]<<endl;
    //    }

    //?  Example 1
    // int n;

    // cout << "Masukkan banyak mahasiswa:";
    // cin >> n;
    // float nilai[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Masukkan nilai mahasiswa ke-" << i + 1 << ": ";
    //     cin >> nilai[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Nilai mahasiswa ke-" << i + 1 << ": " << nilai[i] << endl;
    // }

    //? Example 2

    string nama_karyawan[]={ "Andi","Yusuf", "Yanto", "Santi", "Dodi"};
    //! sizeoff()-> berfungsi untuk mengecek ukuran dari array/objek
    //*  n*sizeof(string)=sizeof(nama_karyawan)
    //*  sizeof(nama_karyawan)/sizeof(string)
    
    for(int i=0; i<sizeof(nama_karyawan)/sizeof(string); i++){
        cout<<nama_karyawan[i]<<endl;
    }


    //? example 3

    int matrix[2][2];
    int matrix[2][2];
    int hasil[2][2];

    cout<<"Masukkan nilai matrix 1"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Masukkan elemen baris-"<<i+1<<" kolom ke-"<<j+1<<": ";
            cin>>matrix1[i][j];
        }
    }
    cout<<"Masukkan nilai matrix 2"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Masukkan elemen baris-"<<i+1<<" kolom ke-"<<j+1<<": ";
            cin>>matrix_2[i][j];
        }
    }
    cout<<"Hasil penjumlahan matrix"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            hasil[i][j]=matrix1[i][j]+matrix2[i][j];
            cout<<hasil[i][j]<<" ";
        }
        cout<<endl;
    }
}