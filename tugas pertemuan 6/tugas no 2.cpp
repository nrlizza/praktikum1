#include <iostream>

int main() {
    int jumlahBaris;

    std::cout << "Masukkan jumlah baris: ";
    std::cin >> jumlahBaris;

    for (int i = 1; i <= jumlahBaris; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}