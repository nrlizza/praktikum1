#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2, jarak;

    cout << "Masukkan koordinat x dan y titik pertama: ";
    cin >> x1 >> y1;

    cout << "Masukkan koordinat x dan y titik kedua: ";
    cin >> x2 >> y2;

    jarak = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Jarak antara (" << x1 << ", " << y1 << ") dan (" << 
    x2 << ", " << y2 << ") adalah " << jarak << endl;

    return 0;
}