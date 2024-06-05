// #include <iostream>
// using namespace std;
// struct Mahasiswa
// {
//     string nama,nim;
//    float nilai;
// };

// int main(){
//     system("cls");
//     Mahasiswa mhs;
//     vector<Mahasiswa> Mahasiswa;
//     int n;

//     cout<<"Masukkan jumlah mahasiswa: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin.get();
//         cout<<"Nama Mahasiswa: ";
//         getline(cin,mhs.nama);
//         cout<<"Masukkan NIM: ";
//         cin>>mhs.nim;
//         cout<<"Masukkan Nilai: ";
//         cin>>mhs.nilai;
//        Mahasiswa.push_back(mhs);

//     }
//     for (int i=0;i<n;i++){
//         cout<<Mahasiswai].nama<<"memiliki NIM"<<Mahasiswa[i].nim<<"dan nilai"<<Mahasiswa[i].nilai<<endl;
//     }
// }




#include <iostream>
#include <vector>
using namespace std;

struct Mahasiswa
{
    string nama,nim;
    float nilai;
};

int main(){
    system("cls");
    Mahasiswa mhs;
    vector<Mahasiswa> daftarMahasiswa;
    int n;

    cout<<"Masukkan jumlah mahasiswa: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin.get();
        cout<<"Nama Mahasiswa: ";
        getline(cin,mhs.nama);
        cout<<"Masukkan NIM: ";
        cin>>mhs.nim;
        cout<<"Masukkan Nilai: ";
        cin>>mhs.nilai;
        daftarMahasiswa.push_back(mhs);
    }
    for (int i=0;i<n;i++){
        cout<<daftarMahasiswa[i].nama<<" memiliki NIM "<<daftarMahasiswa[i].nim<<" dan nilai "<<daftarMahasiswa[i].nilai<<endl;
    }
}