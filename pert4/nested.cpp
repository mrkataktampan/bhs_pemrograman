#include <iostream>

using namespace std;

void postfixinc() {
    int a = 1;
    cout << a << "ini nilai awal i" << endl;
    cout << ++a << "ini nilai prefix" << endl;
    cout << a++ << "ini nilai postfix" << endl;
}

void nestedif() {
    int a = 5;
    if (a >= 5) {
        cout << "nilai awal" << endl;
        if (a <= 5) {
            cout << "nilai lebih kecil" << endl;

            if (a >= 5) {
                cout << "nilai lebih besar" << endl;
            }
        } else {
            cout << "invalid" << endl;
        }
    }
}

int main() {
    int i = 1;
    int j = 1;
    for (i; i<=5; i++) { //postfix increment
        for (j; j<=i; ++j) { //prefix increment
            cout << j << " ";
        }
    }
    cout << endl;
    return 0;
}