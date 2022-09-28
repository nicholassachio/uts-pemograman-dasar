#include<iostream>
using namespace std;
int main(){
int luas,keliling;
int r;

  cout << "aplikasi hitung luas+keliling lingkaran"<<endl;
  cout << "masukkan r ="; cin >> r;
  
  keliling = 2*r*22/7;
  luas = r * r * 22/7;
  cout << "luas lingkaran ="<<luas<<endl;
  cout << " keliling lingkaran ="<<keliling<<endl;
}
