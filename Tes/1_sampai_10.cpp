#include <iostream>

using namespace std;

int main () {
    string nama1, nama2, nama3;
    int nim;
    
    cout << "Masukkan nama : " ;
    getline (cin, nama1);
    getchar();


    cout << "NIM : ";
    cin >> nim;

    cout << endl;

    cout << "Nama saya adalah " << nama1 << endl;

    //cout << endl;

    cout << "NIM saya adalah " << nim << endl;
    //cout << endl;

    for(int i = 1; i < 10; i++) {
        cout << i << " ";
    }
    return 0;
}