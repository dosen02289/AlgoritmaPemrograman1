#include <iostream>
#include <cmath> // untuk sqrt()
using namespace std;

int main() {
float panjang, lebar;
int pilihan;

cout << "Masukkan panjang: ";
cin >> panjang;
cout << "Masukkan lebar: ";
cin >> lebar;

do {
	cout << "\nMenu Empat Persegi Panjang\n";
	cout << "========================\n";
	cout << "1. Hitung luas\n";
	cout << "2. Hitung keliling\n";
	cout << "3. Hitung panjang diagonal\n";
	cout << "4. Keluar program\n";
	cout << "=========================\n";
	cout << "Pilih nomor: ";
	cin >> pilihan;
	switch(pilihan) {
		case 1:
		cout << "Luas = " << panjang * lebar << endl;
		break;
		case 2:
		cout << "Keliling = " << 2 * (panjang + lebar) << endl;
		break;
		case 3:
		cout << "Diagonal = " << sqrt(panjang * panjang + lebar * lebar) << endl;
		break;
		case 4:
		cout << "Terima kasih. Program selesai.\n";
		break;
		default:
		cout << "Pilihan tidak valid. Coba lagi.\n";
	}
} while(pilihan != 4);

return 0;
}
