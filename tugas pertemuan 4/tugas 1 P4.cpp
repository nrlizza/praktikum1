#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Membuat dua vektor untuk angka Arab dan angka Romawi
vector<int> arab_nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
vector<string> roman_nums = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

string arabToRoman(int num) {
    string result = "";

    // Melakukan konversi dengan logika greedy
    for (int i = 0; i < arab_nums.size(); i++) {
        while (num >= arab_nums[i]) {
            result += roman_nums[i];
            num -= arab_nums[i];
        }
    }

    return result;
}

int main() {
    int angkaArab;
    
    cout << "Masukkan angka Arab: ";
    cin >> angkaArab;

    // Memanggil fungsi untuk konversi
    string angkaRomawi = arabToRoman(angkaArab);

    cout << "Angka Romawi: " << angkaRomawi << endl;

    return 0;
}