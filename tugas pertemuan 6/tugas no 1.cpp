#include <iostream>
#include <limits> // Untuk menginisialisasi nilai terbesar dan terkecil

int main() {
    // Inisialisasi variabel
    double total = 0.0;
    double nilai_terbesar = std::numeric_limits<double>::min(); // Inisialisasi dengan nilai terkecil yang mungkin
    double nilai_terkecil = std::numeric_limits<double>::max(); // Inisialisasi dengan nilai terbesar yang mungkin

    // Membaca sepuluh data dari keyboard
    for (int i = 1; i <= 10; i++) {
        double bilangan;
        std::cout << "Masukkan bilangan " << i << ": ";
        std::cin >> bilangan;

        // Menambahkan nilai ke total
        total += bilangan;

        // Memperbarui nilai terbesar dan terkecil
        if (bilangan > nilai_terbesar) {
            nilai_terbesar = bilangan;
        }
        if (bilangan < nilai_terkecil) {
            nilai_terkecil = bilangan;
        }
    }

    // Menghitung nilai rata-rata
    double rata_rata = total / 10;

    // Menampilkan hasil
    std::cout << "Nilai Rata-rata = " << rata_rata << std::endl;
    std::cout << "Nilai terbesar = " << nilai_terbesar << std::endl;
    std::cout << "Nilai terkecil = " << nilai_terkecil << std::endl;

    return 0;
}
