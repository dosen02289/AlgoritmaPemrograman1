#include <iostream>
using namespace std;
int main() {
int n;
float angka, total = 0.0, rataRata;
cout << "Masukkan jumlah bilangan: ";
cin >> n;
for (int i = 1; i <= n; ++i) {
cout << "Masukkan bilangan ke-" << i << ": ";
cin >> angka;
total += angka;
}
rataRata = total / n;
cout << "Rata-rata dari " << n << " bilangan adalah: " << rataRata << endl;
return 0;
}

