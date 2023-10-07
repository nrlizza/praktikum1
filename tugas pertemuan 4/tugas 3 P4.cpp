#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaKaryawan;
    int tipeRumah, jumlahRumahTerjual;
    double bonus = 0.0;

    // Input nama karyawan
    cout << "Masukkan nama karyawan: ";
    getline(cin, namaKaryawan);

    // Input tipe rumah dan jumlah rumah terjual
    cout << "Masukkan tipe rumah (45/54/70): ";
    cin >> tipeRumah;
    cout << "Masukkan jumlah rumah terjual: ";
    cin >> jumlahRumahTerjual;

    // Hitung bonus
    if (jumlahRumahTerjual > 5) {
        if (tipeRumah == 45) {
            bonus = jumlahRumahTerjual * 500000.0;
        } else if (tipeRumah == 54) {
            bonus = jumlahRumahTerjual * 1000000.0;
        } else if (tipeRumah == 70) {
            bonus = jumlahRumahTerjual * 1250000.0;
        }
    } else if (jumlahRumahTerjual >= 1) {
        if (tipeRumah == 45) {
            bonus = jumlahRumahTerjual * 250000.0;
        } else if (tipeRumah == 54) {
            bonus = jumlahRumahTerjual * 500000.0;
        } else if (tipeRumah == 70) {
            bonus = jumlahRumahTerjual * 1000000.0;
        }
    }

    // Output hasil perhitungan bonus
    cout << "Total Bonus yang diterima " << namaKaryawan << " = Rp. " << bonus << endl;

    return 0;
}