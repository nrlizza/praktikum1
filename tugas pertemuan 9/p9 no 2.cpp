#include <iostream> 
using namespace std; 

int sentinelLinearSearch(int arr[], int size, int target) 
{ 
   int last = arr[size - 1]; 
    arr[size - 1] = target; 

  int i = 0; 
  while (arr[i] != target) { 
    i++; 
  } 

   arr[size - 1] = last; 

  if (i < size - 1 || arr[size - 1] == target) { 
    return i; 
  } 
  else { 
    return -1; 
  } 
} 

int main() 
{ 
  int arr[] = { 1, 8, 4, 11, 2 }; 
  int size = sizeof(arr) / sizeof(arr[0]); 
  int target = 4; 

  int result = sentinelLinearSearch(arr, size, target); 

   if (result != -1) { 
    cout << "Elemen " << target << " Ditemukan di indeks "
      << result << endl; 
  } 
  else { 
    cout << "Elemen " << target << " Tidak ditemukan "
      << endl; 
  } 

  return 0; 
}
