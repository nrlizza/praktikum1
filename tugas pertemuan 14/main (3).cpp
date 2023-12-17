#include <iostream>
#include <string>

using namespace std;

struct Barang {
    string nama;
    int harga;
    int jumlahTerjual;
    int totalPerItem;
};

int main() {
    const int JUMLAH_BARANG = 10;
    Barang dataPenjualan[JUMLAH_BARANG];

    const int hargaItem[JUMLAH_BARANG] = {5000, 6000, 15000,};

    for (int i = 0; i < JUMLAH_BARANG; ++i) {
        cout << "Masukkan jumlah terjual untuk Item " << i + 1 << ": ";
        cin >> dataPenjualan[i].jumlahTerjual;
        dataPenjualan[i].totalPerItem = dataPenjualan[i].jumlahTerjual * hargaItem[i];
    }

    int totalPenjualanHarian = 0;
    for (int i = 0; i < JUMLAH_BARANG; ++i) {
        totalPenjualanHarian += dataPenjualan[i].totalPerItem;
    }

    int itemTerlakuIndex = 0;
    for (int i = 1; i < JUMLAH_BARANG; ++i) {
        if (dataPenjualan[i].jumlahTerjual > dataPenjualan[itemTerlakuIndex].jumlahTerjual) {
            itemTerlakuIndex = i;
        }
    }

    cout << "========================================" << endl;
    cout << "        REKAPITULASI PENJUALAN         " << endl;
    cout << "========================================" << endl;
    cout << "No.  Nama Barang   Harga   Jml Terjual  Total Per Item" << endl;
    for (int i = 0; i < JUMLAH_BARANG; ++i) {
        cout << i + 1 << ".   Item " << i + 1 << "   " << hargaItem[i] << "      "
             << dataPenjualan[i].jumlahTerjual << "         " << dataPenjualan[i].totalPerItem << endl;
    }
    cout << "----------------------------------------" << endl;
    cout << "Total Penjualan Harian: Rp. " << totalPenjualanHarian << endl;
    cout << "Item yang paling laku adalah Item " << itemTerlakuIndex + 1 << endl;
    cout << "========================================" << endl;

    return 0;
}
