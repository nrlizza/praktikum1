#include <iostream>
using namespace std;

int main() {
  int jarak, waktu;
  float kecepatan;

  cout<<"masukkan jarak tempuh (dalam km): 75km";
  cin>>jarak;
  cout<<"masukkan waktu tempuh (dalam jam): 20jam";
  cin>>waktu;

  kecepatan = jarak / waktu;

  cout<<"kecepatan kendaraan:"<<kecepatan<<"km/jam"<<endl;

  return 0;
}