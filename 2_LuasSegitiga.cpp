#include <iostream>

using namespace std;

int main() 
{
    //Deklarasi Variabel
    int alas, tinggi;
    double luas;

    //Statement
    cout << "Masukkan alas segitiga : ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga : ";
    cin >> tinggi;

    //Proses perhitungan Luas Segitiga
    luas = (alas*tinggi)/2;

    //Cetak Hasil Perhitungan Luas Segitiga
    cout << "Maka luas segitiga jika: \nalasnya =" << alas << "\ntingginya = " << tinggi << "\nYaitu .....\n" << "Luas = " << luas;
}