#include <iostream>
using namespace std;
int main () {
int x,y,z ;
string garis = "======================================\n";

// Algoritma
cout << "MENAMPILKAN NILAI YANG TERBESAR\n " << garis;
cout << "Masukkan Nilai Pertama : "; cin >> x;
cout << "Masukkan Nilai Kedua : "; cin >> y;
cout << "Masukkan Nilai Ketiga : "; cin >> z;

cout << garis;
cout << "Hasil : ";



if ( x > y and x > z){
   cout << x;
}else if( y > x and y > z){
   cout << y ;
} else if (z > x and z > x){
   cout << z ;
} else {
  cout << " Bilangan Sama"  ;
}
return 0;
}