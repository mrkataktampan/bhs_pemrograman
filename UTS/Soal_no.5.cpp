#include <iostream>

using namespace std;

int main() {
    int a1, a2;

    cout << "Masukkan Angka Pertama	: ";
    cin >> a1;
    cout << "Masukkan Angka Kedua	: ";
    cin >> a2;
    int penjumlahan = a1 + a2;
    cout << "Penjumlahan	: " << penjumlahan << endl;
    int pengurangan = a1 - a2;
    cout << "Pengurangan	: " << pengurangan << endl;
	int perkalian = a1 * a2;
    cout << "Perkalian	: " << perkalian << endl;
	int pembagian = a1 / a2;
    cout << "Pembagian	: " << pembagian << endl;

    return 0;
}