// Volume = (½ x alas x tinggi) x tinggi prisma.
 //Luas permukaan = (2 x luas alas) + luas selimut
 #include <iostream>
using namespace std;
int main() {
    float alas , tinggi, tinggiPrisma , luas_alas , luas_selimut, volume , luas_permukaan;

    cout << "Masukkan alas: ";
    cin >> alas;
    cout << "Masukkan tinggi : ";
    cin >> tinggi;
    cout << "Masukkan tinggi prisma: ";
    cin >> tinggiPrisma;
    cout << "Masukkan luas alas: ";
    cin >> luas_alas;
     cout << "Masukkan luas selimut: ";
    cin >> luas_selimut;

    volume = (1.0 / 2) * alas * tinggi * tinggiPrisma; 
    luas_permukaan = (2 *luas_alas) + luas_selimut;

    cout << "Volume = " << volume << endl;
    cout << "Luas permukaan = " << luas_permukaan << endl;

    return 0;
}