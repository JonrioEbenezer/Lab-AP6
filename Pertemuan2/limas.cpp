#include <iostream>
using namespace std;

int main() {
    float luas_alas, luas_permukaan, luas_tegak, volume, tinggi;

    cout << "Masukkan luas alas: ";
    cin >> luas_alas;
    cout << "Masukkan tinggi limas: ";
    cin >> tinggi;
    cout << "Masukkan luas sisi tegak limas: ";
    cin >> luas_tegak;

    volume = (1.0 / 3) * luas_alas * tinggi; // Perhatikan penggunaan 1.0 untuk pembagian floating point
    luas_permukaan = luas_alas + luas_tegak;

    cout << "Volume = " << volume << endl;
    cout << "Luas permukaan = " << luas_permukaan << endl;

    return 0;
}