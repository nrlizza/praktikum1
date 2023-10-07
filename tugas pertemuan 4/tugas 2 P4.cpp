#include <iostream>

using namespace std;

int main() {
    float nilai_tes, nilai_uts, nilai_uas, nilai_tugas, nilai_akhir;
    char indeks_nilai;

    // Input nilai
    cout << "Masukkan nilai tes: ";
    cin >> nilai_tes;

    cout << "Masukkan nilai UTS: ";
    cin >> nilai_uts;

    cout << "Masukkan nilai UAS: ";
    cin >> nilai_uas;

    cout << "Masukkan nilai tugas: ";
    cin >> nilai_tugas;

    // Menghitung nilai akhir
    nilai_akhir = 0.2 * nilai_tes + 0.3 * nilai_uts + 0.3 * nilai_uas + 0.2 * nilai_tugas;

    // Mengkonversi nilai akhir menjadi indeks nilai
    if (nilai_akhir <= 50) {
        indeks_nilai = 'D';
    } else if (nilai_akhir > 50 && nilai_akhir <= 70) {
        indeks_nilai = 'C';
    } else if (nilai_akhir > 70 && nilai_akhir <= 80) {
        indeks_nilai = 'B';
    } else {
        indeks_nilai = 'A';
    }

    // Output nilai akhir dan indeks nilai
    cout << "Nilai akhir: " << nilai_akhir << endl;
    cout << "Indeks nilai: " << indeks_nilai << endl;

    return 0;
}