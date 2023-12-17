#include <iostream>
using namespace std;

int main() {
    int X = 10;
    int Y = 23;

    cout << "sebelum penukaran: X = " << X << ", Y = " << Y << endl;

    int temp = X;
    X = Y;
    Y = temp;

    cout << "setelah penukaran: X = " << X << ", Y = " << Y << endl;

    return 0;
}
