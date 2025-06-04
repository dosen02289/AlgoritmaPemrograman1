#include <iostream>
using namespace std;

int main() {
    int A[5][5];
    int B[3][3];

    // Mengisi array A dengan angka 1 sampai 25
    int nilai = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            A[i][j] = nilai++;
        }
    }

    // Mengisi array B sesuai dengan isi gambar
    B[0][0] = 4; B[0][1] = 5; B[0][2] = 3;
    B[1][0] = 4; B[1][1] = 5; B[1][2] = 5;
    B[2][0] = 9; B[2][1] = 8; B[2][2] = 7;

    // Menampilkan array A
    cout << "Array A:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    // Menampilkan array B
    cout << "\nArray B:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

