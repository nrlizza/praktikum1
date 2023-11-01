#include <iostream>
using namespace std;

int main()
{
    // Deklarasi variabel
    double dollar, euro, rupiah, harga_mobil, sisa;

    // Input data
    cout << "Masukkan jumlah tabungan dalam Dollar: ";
    cin >> dollar;
    cout << "Masukkan jumlah tabungan dalam Euro: ";
    cin >> euro;
    cout << "Masukkan harga mobil baru dalam Rupiah: ";
    cin >> harga_mobil;

    // Konversi mata uang
    rupiah = dollar * 15000 + euro * 0.997 * 15000;

    // Hitung sisa uang
    sisa = rupiah - harga_mobil;

    // Tampilkan hasil
    cout << "Dana Pak Anto setelah dikonversi ke Rupiah adalah: Rp." << rupiah << endl;
    cout << "Sisa uang Pak Anto setelah membeli mobil baru adalah: Rp." << sisa << endl;

    return 0;
}