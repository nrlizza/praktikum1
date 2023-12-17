#include <iostream>

using namespace std;

int main() {
    const double biayaPerKwh[] = {0, 1350, 1440, 1450, 1500};

    int dayaListrik = 2200;

    int pemakaianAC = 800;
    int pemakaianKulkas = 200;
    int pemakaianStrika = 150;
    int pemakaianMesinCuci = 250;
    int pemakaianLampu = 250;
    int pemakaianLainnya = 100;

    int totalPemakaianHarian = pemakaianAC + pemakaianKulkas + pemakaianStrika + pemakaianMesinCuci + pemakaianLampu + pemakaianLainnya;

    int totalPemakaianBulanan = totalPemakaianHarian * 30; 

    double biayaPembayaran = (totalPemakaianBulanan * dayaListrik) / 1000.0 * biayaPerKwh[dayaListrik / 1000];

    cout << "Biaya pembayaran listrik tiap bulan adalah Rp. " << biayaPembayaran << endl;

    return 0;
}
