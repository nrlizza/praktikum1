#include <iostream>
using namespace std;

int main() {
    // Tabungan dalam Dollar dan Euro
    double dollar = 12000;
    double euro = 20000;

    // Kurs
    double kurs_usd = 15000;
    double kurs_euro = 0.997;

    // Konversi ke Rupiah
    double rupiah_dollar = dollar * kurs_usd;
    double rupiah_euro = euro * kurs_usd * kurs_euro;

    // Total dana dalam Rupiah
    double total_rupiah = rupiah_dollar + rupiah_euro;

    // Harga mobil baru
    double harga_mobil = 425000000;

    // Sisa uang Pak Anto setelah membeli mobil
    double sisa_uang = total_rupiah - harga_mobil;

    // Menampilkan hasil perhitungan
    cout << "Dana Pak Anto setelah dikonversi ke Rupiah: " << total_rupiah << " Rupiah" << endl;
    cout << "Sisa uang Pak Anto setelah membeli mobil: " << sisa_uang << " Rupiah" << endl;

    return 0;
}