#include <iostream>

using namespace std;

int main() {
    int TahunAwal, TahunSekarang, Umur;

    cout << "Masukkan Tahun Anda Lahir : ";
    cin >> TahunAwal;
    cout << "Masukkan Pada Tahun Berapa Sekarang : ";
    cin >> TahunSekarang;
    Umur = TahunSekarang - TahunAwal;
    cout << "Berarti Usia Kalian Sekarang " << Umur << " Tahun" << endl;

    return 0;
}