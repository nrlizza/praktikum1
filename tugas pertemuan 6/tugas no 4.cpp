#include <iostream>

unsigned long long faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int n;

    std::cout << "Masukkan nilai n: ";
    std::cin >> n;

    unsigned long long hasil = faktorial(n);

    std::cout << n << "! = " << hasil << std::endl;

    return 0;
}
