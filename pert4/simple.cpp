#include <iostream>
#include <string>

using namespace std;

class Nama {
    public :
        string fName, mName, 1Name;
        void full(string fName, string mName, string 1Name)
        {
            cout << "FULL NAME : " << fName + " " << mName << " " << 1Name << endl;
        }
};

int main() {
    Nama n;
    int pilih;
    char pil;
menu:
    cout << "MENU" << endl;
    cout << "1. Input" << endl;
    cout << "2. Exit" << endl;
    cout << "pilihan : " ;
    cin >> pilih;

    switch(pilih) {
        case 1:
            cout << "Masukkan Nama Depan : ";
            cin >> n.fName;
            cout << "Masukkan Nama Tengah : ";
            cin >> n.mName;
            cout << "Masukkan Nama Akhir : ";
            cin >> n.1Name;
            n.full(n.fName, n.mName, n.1Name);
            break;
        case 2:
            goto keluar;
            break;
        default:
            cout << "Pilihan Salah" << endl;
            break;
    }

    cout << "Ingin Mengulangi ? "

}