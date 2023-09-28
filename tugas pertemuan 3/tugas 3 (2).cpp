#include <iostream>
using namespace std;

int main() {
    int operan1, operan2, hasil;
    char operator1;

    // Memasukkan data operan dan operator
    cout << "Masukkan operan 1: ";
    cin >> operan1;
    cout << "Masukkan operator (+,-,*,/): ";
    cin >> operator1;
    cout << "Masukkan operan 2: ";
    cin >> operan2;

    // Melakukan operasi sesuai dengan operator
    if (operator1 == '+') {
        hasil = operan1 + operan2;
    } else if (operator1 == '-') {
        hasil = operan1 - operan2;
    } else if (operator1 == '*') {
        hasil = operan1 * operan2;
    } else if (operator1 == '/') {
        hasil = operan1 / operan2;
    } else {
        cout << "Operator tidak valid!" << endl;
        return 0;
    }

    // Menampilkan hasil operasi
    cout << "Operan 1: " << operan1 << endl;
    cout << "Operan 2: " << operan2 << endl;
    cout << "Operator: " << operator1 << endl;
    cout << "Hasil: " << hasil << endl;

    return 0;
}
