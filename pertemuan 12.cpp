#include <iostream>
using namespace std;

void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int max_index = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        swap(arr[i], arr[max_index]);
    }
}

int main() {
    int arr[] = {21, 83, 42, 11, 10, 9, 3, 20, 102, 27, 15, 92, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Data sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    selectionSortDescending(arr, n);

    cout << "\nData setelah diurutkan secara menurun: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}