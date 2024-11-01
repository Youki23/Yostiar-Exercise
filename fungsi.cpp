#include <iostream>
using namespace std;
int main () {
// Deklarasi
int x,y ;
string garis = "======================================\n";

// Algoritma
cout << "MENAMPILKAN NILAI YANG TERBESAR\n " << garis;
cout << "Masukkan Nilai Pertama : "; cin >> x;
cout << "Masukkan Nilai Kedua : "; cin >> y;
cout << garis;
cout << "Hasil : ";



if ( x > y){
    cout <<  x;
}else if( y > x) {
   cout << y ;
} else  {
  cout << " Bilangan Sama"  ;
}

return 0;
}