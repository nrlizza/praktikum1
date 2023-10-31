#include <iostream>

int main() {
    int a, b, c;

    // Langkah 1: Membaca tiga bilangan bulat a, b, dan c
    std::cout << "Masukkan nilai a: ";
    std::cin >> a;

    std::cout << "Masukkan nilai b: ";
    std::cin >> b;

    std::cout << "Masukkan nilai c: ";
    std::cin >> c;

    // Langkah 2: Menghitung hasil ekspresi
    int x = 1;
    int hasil = 6 * (a * x * x + b * x + c);

    // Langkah 3: Menampilkan hasil perhitungan
    std::cout << "Hasil perhitungan 6*(ax^2 + bx + c) untuk x = 1 adalah: " << hasil << std::endl;

    return 0;
}