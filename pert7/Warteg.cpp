#include <iostream>
#include <string>
using namespace std;

int main() {
    char pilih;
    int harga, qty, total;


    do {
        cout << "Menu:\n";
        cout << "1. Makanan\n";
        cout << "2. Minuman\n";
        cout << "3. Exit\n";
        cout << "Pilih: ";
        cin >> pilih;

        if (pilih == '1') {
            cout << "Makanan:\n";
            cout << "1. Ayam Bakar\n";
            cout << "2. Bakso\n";
            cout << "3. Kembali\n";
            cout << "Pilih: ";
            cin >> pilih;

            if (pilih == '1') {
                harga = 10000;
            } else if (pilih == '2') {
                harga = 8000;
            } else {
                continue;
            }
        } else if (pilih == '2') {
            cout << "Minuman:\n";
            cout << "1. Es Teh\n";
            cout << "2. Thai Tea\n";
            cout << "3. Kembali\n";
            cout << "Pilih: ";
            cin >> pilih;

            if (pilih == '1') {
                harga = 5000;
            } else if (pilih == '2') {
                harga = 6000;
            } else {
                continue;
            }
        } else if (pilih == '3') {
            break;
        } else {
            cout << "Pilihan Tidak Tersedia\n";
            continue;
        }

        cout << "Qty: ";
        cin >> qty;

        total = qty * harga;

        cout << "Total: " << total << endl;

    } while (pilih != '3');

    cout << "EXIT\n";
    
    return 0;
}
