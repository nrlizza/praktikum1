#include <bits/stdc++.h> 
using namespace std; 

int binarySearch(int arr[], int low, int high, int x) 
{ 
  while (low <= high) { 
    int mid = low + (high - low) / 2; 

    if (arr[mid] == x) 
      return mid; 

    if (arr[mid] < x) 
      low = mid + 1; 

    else
      high = mid - 1; 
  } 

  return -1; 
} 

int main(void) 
{ 
  int arr[] = { 2, 3, 4, 10, 40 }; 
 
  int x = 10; 
  int n = sizeof(arr) / sizeof(arr[0]); 
  int result = binarySearch(arr, 0, n - 1, x); 
  (result == -1) 
    ? cout << "Elemen tidak ada dalam larik"
    : cout << "Elemen ada di indeks" << result; 
  return 0; 
}
