#include <iostream>

// Fungsi untuk menampilkan bentuk star1
void star1(int tinggi) {
    for (int i = tinggi; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Fungsi untuk menampilkan bentuk star2
void star2(int tinggi) {
    for (int i = 0; i < tinggi; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        for (int k = tinggi; k > i; k--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Fungsi untuk menampilkan bentuk star3
void star3(int tinggi) {
    for (int i = tinggi; i >= -tinggi; i--) {
        int j = std::abs(i);
        int space = tinggi - j;

        for (int k = 0; k < space; k++) {
            std::cout << " ";
        }

        for (int l = 0; l < j * 2 + 1; l++) {
            if (l % 2 == 0) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }
}

int main() {
    int tinggi;

    std::cout << "Masukkan tinggi star: ";
    std::cin >> tinggi;

    std::cout << "Star 1:\n";
    star1(tinggi);

    std::cout << "Star 2:\n";
    star2(tinggi);

    std::cout << "Star 3:\n";
    star3(tinggi);

    return 0;
}