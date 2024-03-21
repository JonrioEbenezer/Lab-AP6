#include <iostream>
 using namespace std;

 int main(){
    float  r , volume , tinggi;

const float phi = 3.14;
    cout << "masukkan jari jari :";
    cin >> r;
    cout << "masukkan tinggi :";
    cin >> tinggi;
    volume = phi * r * r * tinggi;

  cout << "volume = " << volume << endl;
 }