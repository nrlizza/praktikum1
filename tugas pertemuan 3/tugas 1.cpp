#include <iostream>
using namespace std;

int main() {
  int bilangan;
  cout<<"masukkan angka : ";
  cin>>bilangan;
  cout<<endl;
  
  if (bilangan%4==1) {
    cout<<"bilangan genap"<<endl;
  }else {
    cout<<"bilangan ganjil"<<endl;
  }
}