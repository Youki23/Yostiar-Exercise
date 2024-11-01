#include <iostream>
using namespace std;

int main () {
    int JenisSampah;
    int BeratSampah;    // 2415061016 
    int DimensiSampah;
    int berat, dimensi;
    int totalberat, totaldimensi;
    int hasilsampah;
    string garis = "=============================================";

// Menampilkan Judul Kode By Yostiar Aminudin
    cout << garis << endl;
    cout << "                   CV CLEAN " <<"\n"  ;
    cout << garis;
    cout << "\nPilihan Sampah\n"
         << "1. Organik" << "\n"
         << "2. Anorganik" << "\n"
         << "3. B3 " << "\n";

// Penggunaan Switch dan looping
do {
cout << "Masukan Pilihan Sampah (1-3) = "; cin >> JenisSampah;    
switch (JenisSampah){
case 1 : 
    cout << "Terpilih : Organik\n";
    BeratSampah = 2500;
    DimensiSampah = 3000;
    break;

case 2 :
    cout << "Terpilih : Anorganik\n";
    BeratSampah = 3000;
    DimensiSampah = 3500;
    break;

case 3 :
    cout << "Terpilih : B3\n";
    BeratSampah = 3500;
    DimensiSampah = 4500;
    break;    
default:
cout << "Pilihan tidak valid, mohon masukkan ulag nilainya ! \n";
    continue;
}
} while ( JenisSampah < 1 or JenisSampah > 3);

// Menghitung Harga Sampah

// Total Harga Berat
cout << garis << endl;
cout << "Menghitung Harga Berat Sampah" << endl ; 
cout << garis << endl;
cout << "Berat Sampah 1 Kg = Rp." << BeratSampah<< endl;
cout << "Masukan Berat Sampah = " ;
cin >> berat;
totalberat = berat * BeratSampah;
cout << "Total Dari Harga (Berat) = Banyak Sampah x Harga Sampah " << endl;
cout << totalberat << " = " << berat << " x " << BeratSampah << endl;
cout << garis << endl;
cout << "Total Harga Berat Yang Dihasilkan = " << totalberat << endl;
cout << garis << endl;

// Dimensi Sampah
cout << "Menghitung Harga Dimensi Sampah" << endl ; 
cout << garis << endl;
cout << "Dimensi  Sampah 1 m'2 =  Rp." << DimensiSampah<< endl;
cout << "Masukan Dimensi Sampah = " ;
cin >> dimensi;
totaldimensi = dimensi * DimensiSampah;
cout << "Total Dari Harga (Dimensi) = Banyak Sampah x Harga Sampah " << endl;
cout << totaldimensi << " = " << dimensi << " x " << DimensiSampah << endl;
cout << garis << endl;
cout << "Total Harga Berat Yang Dihasilkan = " << totaldimensi << endl;
cout << garis << endl;

// Menghitung Hasil Dari Dimensi Sampah dan Berat Sampah 
cout << garis << endl;
cout << "Menghitung Hasil Dari Dimensi Sampah dan Berat Sampah" << endl;
cout << garis << endl;

// Perhitungan Total Sampah + Total Dimensi (Kodingan Yostiar Aminudin Calon Full Stack Dev)
hasilsampah = totalberat + totaldimensi;
 cout << "Total = Total Harga (Berat Sampah) + Total Harga (Dimensi) Sampah" << endl
      << hasilsampah << " = " << totalberat << " x " << totaldimensi << endl
      << "Total Hasil Harga Yang Dihasilkan =  Rp." << hasilsampah << endl;
 
 



return 0;



}