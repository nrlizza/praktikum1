#include <iostream>
#include <string>
using namespace std;

bool isPasswordValid(const string& password) {

    if (password.length() != 8) {
        return false;
    }
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (password[i] == password[j]) {
                return false;
            }
        }
    }

    string encryptedPassword = password;
    for (int i = 0; i < 8; i++) {
        if (isalpha(password[i])) {
            encryptedPassword[i] = password[i] + 2;
        }
        else if (isdigit(password[i])) {
            encryptedPassword[i] = (password[i] - '0') * 2 + '0';
        }
    }

    cout << "Password yang dimasukkan: " << password << std::endl;
    cout << "Password yang tersimpan (setelah enkripsi): " << encryptedPassword << std::endl;

    return true;
}

int main() {
    string password;
    cout << "Masukkan password (8 karakter, huruf(kecil/besar), angka tidak berulang, dan tidak ada spasi): ";
    cin >> password;

    if (isPasswordValid(password)) {
        cout << "Password valid." << std::endl;
    }
    else {
        cout << "Password tidak valid." << std::endl;
    }

    int kodePassword[8];

    kodePassword[1] = 5;
    kodePassword[2] = 6;
    kodePassword[3] = 7;
    kodePassword[4] = 8;

    cout << "Kode Password: ";
    for (int i = 0; i < 8; i++) {
        cout << kodePassword[i] << " ";
    }

    return 0;
}
