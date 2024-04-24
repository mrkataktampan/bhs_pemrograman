#include <iostream>

using namespace std;
// Maksudnya gimana?
void penggunaandowhile() {
    cout << "Penggunaan DO WHILE" << endl;
    int a = 1;
    int b = 2;

    do {
        cout << a << endl;
        a = a+1;
    } while (a <= b);
}

void penggunaanwhile() {
    cout << "Penggunaan WHILE" << endl;
    int a = 1;
    int b = 2;
    
    while (a <= b) {
        cout << a << endl;
        a = a+1;
    }
}

void penggunaanwhilebreak() {
    cout << "Penggunaan WHILE BREAK" << endl;
    int a = 0;
    while ( a<= 10) {
        a = a+1;
        if (a == 11) {
            cout << a << endl;
            break;
        }
        cout << "Looping while berhenti" << endl;
    }
    cout << "Looping di luar while berhenti";
}

int main() {
    penggunaandowhile();
    penggunaanwhile();
    penggunaanwhilebreak();
    return 0;
}