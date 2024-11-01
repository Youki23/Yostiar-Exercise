#include <iostream>

using namespace std;

// Dua Bilangan
int bandingkan (int x, int y) {
if ( x > y){
    return x;
}else if( y > x) {
   return  y ;
} else  {
 return 0  ;
}
}
// Tiga Bilangan
int bandingkan (int x, int y, int z) {
   
if ( x > y and x > z){
   return  x;
}else if( y > x and y > z){
   return  y ;
} else if (z > x and z > x){
   return z ;
} else {
  return 0 ;
}
}
int main () {
// Deklarasi
int pilih, a,b,c, hasil;
// Menu Perbandingan
    cout << "Pilih perbandingan:\n";
    cout << "1. Bandingkan dua bilangan\n";
    cout << "2. Bandingkan tiga bilangan\n";
    cout << "Masukkan pilihan: ";
    cin >> pilih;

    if (pilih == 1) {
        cout << "Masukkan bilangan pertama: ";
        cin >> a;
        cout << "Masukkan bilangan kedua: ";
        cin >> b;
        hasil = bandingkan(a, b); // Panggil fungsi untuk dua bilangan
        if (hasil == 0  ) {
         cout << "Bilangan sama";
        } else {
          cout << " Hasil Terbesar = " <<  hasil;
        }
    } else if (pilih == 2) {
        cout << "Masukkan bilangan pertama: ";
        cin >> a;
        cout << "Masukkan bilangan kedua: ";
        cin >> b;
        cout << "Masukkan bilangan ketiga: ";
        cin >> c;
        hasil = bandingkan(a, b, c); // Panggil fungsi untuk tiga bilangan
         if (hasil == 0  ) {
         cout << "Bilangan sama";
        } else {
          cout << " Hasil Terbesar = " <<  hasil;
        }
    } else {
        cout << "Pilihan tidak valid." << endl;







return 0;
}
}