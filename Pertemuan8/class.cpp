// #include <iostream>
// using namespace std;

// class Mahasiswa
// {
//     //? Access Modifier
//     private:
//         string nama,nim;
//         float nilai;

//     //? Access Modifier
//     public:
//     //? Constructor Method
//     Mahasiswa(string nama, string nim, float nilai)
//     {
//         this->nama=nama;
//         this->nim=nim;
//         this->nilai=nilai;
//     }
//     void display()
//     {
//         cout<<"Nama Mahasiswa: "<<nama<<endl;
//         cout<<"NIM Mahasiswa: "<<nim<<endl;
//         cout<<"Nilai Mahasiswa: "<<nilai<<endl;
//     }

//     int main()
//     {
//         system("cls");
//         Mahasiswa mhs('Andi',"231401001",87.2);   //? Object Declaration/Instantiation
//         mhs.display();
//         return 0;
//     }

// }





// #include <iostream>
// #include <vector>
// using namespace std;

// class Mahasiswa
// {
//     //? Access Modifier
// private:
//     string nama, nim;
//     float nilai;

//     //? Access Modifier
// public:
//     //? Constructor Method
//     Mahasiswa(string nama, string nim, float nilai)
//     {
//         this->nama = nama;
//         this->nim = nim;
//         this->nilai = nilai;
//     }

//     string getNama()
//     {
//         return this->nama;
//     }
//     string getNim()
//     {
//         return this->nim;
//     }
//     float getNilai()
//     {
//         return this->nilai;
//     }
//     void display()
//     {
//         cout << "Nama Mahasiswa: " << getNama() << endl;
//         cout << "NIM Mahasiswa: " << getNim() << endl;
//         cout << "Nilai Mahasiswa: " << getNilai() << endl;
//     }
// };

// int main()
// {
//     system("cls");
//     // Mahasiswa mhs("Andi", "231401001", 87.2); //? Object Declaration/Instantiation
//     // mhs.display();
//     //! ERORR
//     // cout<<mhs.nama<<endl;

// //     cout << mhs.getNama() << endl;
// //     cout << mhs.getNim() << endl;
// //     cout << mhs.getNilai() << endl;


//     vector<Mahasiswa> mahasiswa;
//     int n;

//     cout << "Masukkan jumlah mahasiswa: ";
//     cin >> n;
//     for(int i=0;i<n;i++){
//         cout<<"Mahasiswa"<<i+1<<endl;
//         cin.get();
//         cout<<"Nama Mahasiswa: ";
//         getline(cin,nama);
//         cout<<"Masukkan NIM: ";
//         cin>>nim;
//         cout<<"Masukkan Nilai: ";
//         cin>>nilai;
//         Mahasiswa mhs(nama,nim,nilai);
//         mahasiswa.push_back(mhs);
//     }
//     for(int i=0;i<n;i++){
//         cout<<"Mahasiswa"<<i+1<<endl;
//         mahasiswa[i].display();
//     }
// }





#include <iostream>
#include <vector>
using namespace std;

class Mahasiswa
{
    //? Access Modifier
private:
    string nama, nim;
    float nilai;

    //? Access Modifier
public:
    //? Constructor Method
    Mahasiswa(string nama, string nim, float nilai)
    {
        this->nama = nama;
        this->nim = nim;
        this->nilai = nilai;
    }

    string getNama()
    {
        return this->nama;
    }
    string getNim()
    {
        return this->nim;
    }
    float getNilai()
    {
        return this->nilai;
    }
    void display()
    {
        cout << "Nama Mahasiswa: " << getNama() << endl;
        cout << "NIM Mahasiswa: " << getNim() << endl;
        cout << "Nilai Mahasiswa: " << getNilai() << endl;
    }
};

int main()
{
    system("cls");
    vector<Mahasiswa> mahasiswa;
    int n;
    string nama, nim;
    float nilai;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    for(int i=0;i<n;i++){   
        cout<<"Mahasiswa"<<i+1<<endl;
        cin.get();
        cout<<"Nama Mahasiswa: ";
        getline(cin,nama);
        cout<<"Masukkan NIM: ";
        cin>>nim;
        cout<<"Masukkan Nilai: ";
        cin>>nilai;
        Mahasiswa mhs(nama,nim,nilai);
        mahasiswa.push_back(mhs);
    }
    for(int i=0;i<n;i++){
        cout<<"Mahasiswa"<<i+1<<endl;
        mahasiswa[i].display();
    }
    return 0;
}



