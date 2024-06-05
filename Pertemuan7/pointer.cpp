#include <iostream>
using namespace std;

void penjumlahan(int *a, int *b)
{ *a+=*b; }
    
int main()
{
    system("cls");

    //? Pointer declaration
    //* normal variable-> var_name(data),&var_name(address)
    int number = 16;
    //* pointer variable-> var_name(data),&var_name(address),*var_name(data of pointed variable)
    int *ptrnumber = &number;

    // cout<<"Isi variabel number          : "<<number<<endl;
    // cout<<"Alamat variabel number       : "<<&number<<endl;
    // cout<<"Isi variabel pointernumber   : "<<ptrnumber<<endl;
    // cout<<"Isi dari alamat pointernumber: "<<*ptrnumber<<endl;

    // //? Pointer Operasi
    // *ptrnumber=37;
    // cout<<"Isi variabel number          : "<<number<<endl;
    // cout<<"Alamat variabel number       : "<<&number<<endl;
    // cout<<"Isi variabel pointernumber   : "<<ptrnumber<<endl;
    // cout<<"Isi dari alamat pointernumber: "<<*ptrnumber<<endl;
    // cout<<"Alamat variabel pointernumber: "<<ptrnumber<<endl;

    //?Pointer in Array
    // int num[]={1,2,3,4,5};
    // int* ptrnum=num;

    // cout<<"Isi variabel num indeks 0 = "<<num[0]<<endl;
    // cout<<"Alamat variabel num indeks 0 = "<<&num[0]<<endl;
    // cout<<"Isi variabel ptrnum = "<<ptrnum<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh ptrnum = "<<*ptrnum<<endl;

    //? Pointer as function parameter
    // int a=2;
    // int b=3;
    // penjumlahan(&a,&b);

    // cout<<a<<endl;

    //? Pointer to Pointer
    //     int n=4;
    //     int* ptrn=&n;
    //    int** ptr_ptrn=&ptrn;
    //     cout<<"Nilai n                                   = "<<n<<endl;
    //     cout<<"Alamat n                                  = "<<&n<<endl;
    //     cout<<"Nilai ptrn                                = "<<ptrn<<endl;
    //     cout<<"Isi dari alamat ptrn                      = "<<*ptrn<<endl;
    //     cout<<"Nilai yang ditunjuk oleh ptrn             = "<<&ptrn<<endl;
    //     cout<<"Alamat ptrn                               = "<<ptr_ptrn<<endl;
    //     cout<<"Isi variabel yang ditunjuk oleh ptr_ptrn  = "<<*ptr_ptrn<<endl;
    //     cout<<"Isi variable n yang diakses dari ptr_ptrn = "<<**ptr_ptrn<<endl;
    //     cout<<"Alamat memori ptr_ptrn                    = "<<&ptr_ptrn<<endl;

    //? dynamic pointer
    int *ptr = new int;  //* memori dialokasikan secara dinamis
    *ptr = 24;
    cout << "Isi variabel ptrn = " << ptr << endl;
    cout<<"Data yang ada di variabel ptrn = "<<*ptr<<endl;
    delete ptr; //* memori yang dialokasikan secara dinamis dihapus/Dealoocated
    cout<<"Isi variabel ptr ="<<ptr<<endl;
    cout<<"Data yang ada di variabel ptrn = "<<*ptr<<endl;

}