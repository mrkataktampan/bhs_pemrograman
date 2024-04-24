#include <iostream>

using namespace std;

int main() {
int angka1, angka2, menu;

    cout << "Masukkan angka ke-1 : " ;
    cin >> angka1;
    cout << "Masukkan angka ke-2 : " ;
    cin >> angka2;

    cout << "Menu Pengoperasian" << endl;
    cout << "1. Pertambahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Pilih Menu : ";
    cin >> menu;

    switch (menu) {
        case 1:
            cout << "Hasil Pertambahan = " << angka1 + angka2 << endl;
            break;
        case 2:
            cout << "Hasil Pengurangan = " << angka1 - angka2 << endl;
            break;
        case 3:
            cout << "Hasil Perkalian = " << angka1 * angka2 << endl;
            break;
        case 4:
            cout << "Hasil Pembagian = " << angka1 / angka2 << endl;
            break;
        default:
            cout << "Pilihan Anda Tidak Dalam Menu" << endl;
            break;
    }

    return 0;
}