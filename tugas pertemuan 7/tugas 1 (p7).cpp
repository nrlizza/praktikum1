#include <iostream>

// Fungsi untuk mengonversi meter ke centimeter
double meterToCentimeter(double meter) {
    return meter * 100;
}

// Fungsi untuk mengonversi centimeter ke meter
double centimeterToMeter(double centimeter) {
    return centimeter / 100;
}

int main() {
    double panjangPitaMeter = 12.0;
    double panjangPitaCentimeter = meterToCentimeter(panjangPitaMeter);

    double panjangPerIkatanCentimeter = 45.0;

    // Menghitung jumlah ikatan bunga rangkai yang dapat dibuat
    int jumlahIkatan = static_cast<int>(panjangPitaCentimeter / panjangPerIkatanCentimeter);

    // Menghitung sisa pita yang tidak digunakan
    double sisaPitaCentimeter = panjangPitaCentimeter - (jumlahIkatan * panjangPerIkatanCentimeter);

    // Menampilkan hasil
    std::cout << "Panjang pita: " << panjangPitaMeter << " meter (" << panjangPitaCentimeter << " centimeter)" << std::endl;
    std::cout << "Panjang per ikatan bunga rangkai: " << panjangPerIkatanCentimeter << " centimeter" << std::endl;
    std::cout << "Jumlah ikatan bunga rangkai yang dapat dibuat: " << jumlahIkatan << std::endl;
    std::cout << "Sisa pita yang tidak digunakan: " << sisaPitaCentimeter << " centimeter" << std::endl;

    return 0;
}