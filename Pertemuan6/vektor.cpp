#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main()
{
    system("cls");
    // vector declaration and initialization
    vector<string> nama={"Andi","Budi","Santi","Wanto","Dennis"};

    //? Accessing vector elements
    // for(int i=0; i<nama.size(); i++){
    //     cout<<nama[i]<<endl;
    // }

//? for each loop
for(string mhs:nama){
    cout<<mhs<<endl;
}



//? ADDING ELEMENTS TO VECTOR
    nama.push_back("Wawan");


//? REMOVING ELEMENTS FROM VECTOR
//nama.pop_back();        // Remove the last element nama.pop_back();
nama.erase(nama.begin());    //? erase() berfungsi menghapus elemen pada posisi tertentu

// for(int i=0; i<nama.size(); i++){
//     cout<<nama[i]<<endl;
// }

//? ARRAY library
array<string,5> nama_mahasiswa={"Andi","Budi","Santi","Wanto","Dennis"};
for(string mhs:nama_mahasiswa){
    cout<<mhs<<endl;
}


}