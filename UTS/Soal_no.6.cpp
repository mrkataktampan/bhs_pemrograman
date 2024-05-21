#include <iostream>

using namespace std;
void menu();
void tambah();
void kurang();
void kali();
void bagi();

int main() {
    menu();
    return 0;
}


void menu() {
    int pilihan;
    do {
        cout << "1. Tambah\n";
        cout << "2. Kurang\n";
        cout << "3. Kali\n";
        cout << "4. Bagi\n";
        cout << "5. Keluar\n";
        cout << "Pilih operasi (1-5): ";

        cin >> pilihan;

        switch(pilihan) {
            case 1:
                tambah();
                break;
            case 2:
                kurang();
                break;
            case 3:
                kali();
                break;
            case 4:
                bagi();
                break;
            case 5:
                cout << "Terima kasih. Program selesai.\n";
                return;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while(pilihan != 5);
}

void tambah() {
    int a, b;
    cout << "Masukkan dua angka untuk ditambahkan: ";
    cin >> a >> b;
    cout << "Hasil Penjumlahan = " << a + b << endl;
}

void kurang() {
    int a, b;
    cout << "Masukkan dua angka untuk dikurangkan: ";
    cin >> a >> b;
    cout << "Hasil Pengurangan = " << a - b << endl;
}

void kali() {
    int a, b;
    cout << "Masukkan dua angka untuk dikalikan: ";
    cin >> a >> b;
    cout << "Hasil Perkalian = " << a * b << endl;
}

void bagi() {
    float a, b;
    cout << "Masukkan dua angka untuk dibagi (a / b): ";
    cin >> a >> b;
    if (b != 0) {
        std::cout << "Hasil Pembagian = " << a / b << endl;
    } else {
        cout << "Tidak bisa melakukan pembagian dengan nol.\n";
    }
}
