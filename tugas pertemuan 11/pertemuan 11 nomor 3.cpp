#include <iostream>
#include <string>

using namespace std;

struct Barang {
    string kode;
    string nama;
    int jumlah;
    int hargaSatuan;
};

int main() {
    const int jumlah_data = 20;
    Barang dataPenjualan[jumlah_data];

    for (int i = 0; i < jumlah_data; ++i) {
        cout << "Masukkan data penjualan ke-" << (i + 1) << ":" << endl;
        cout << "Kode Barang: ";
        cin >> dataPenjualan[i].kode;
        cout << "Nama Barang: ";
        cin >> dataPenjualan[i].nama;
        cout << "Jumlah: ";
        cin >> dataPenjualan[i].jumlah;
        cout << "Harga Satuan: Rp.";
        cin >> dataPenjualan[i].hargaSatuan;
        cout << endl;
    }

    int totalHargaPenjualan = 0;
    for (int i = 0; i < jumlah_data; ++i) {
        totalHargaPenjualan += dataPenjualan[i].jumlah * 
        dataPenjualan[i].hargaSatuan;
    }

    double keuntungan = 0.1 * totalHargaPenjualan;

    cout << "Total Harga Penjualan: Rp." << totalHargaPenjualan << endl;
    cout << "Keuntungan: Rp." << keuntungan << endl;

    return 0;
}
