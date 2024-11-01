#include <iostream>
#include <iomanip>
using namespace std;
int main () {
cout<< "Penghitungan Keuntungan Bu Tailor "<< "\n";
// Deklarasi
int PK = 30;     //( (PK) Panjang Kain = Dalam Meter)
float LK = 1.25 ;  //( (LK) Lebar Kain = Dalam Meter)
float KPB = 3.5 ;  //( (KPB) Kebutuhan Per Baju)
int HB = 120000 ;  //( (HB) Harga Jual per Baju)
int HK = 2900000 ;  //( (HK) Harga Modal Untuk Kain)
int HM = 10000 ;     // (HM) Harga Masker/ Sisa Kain
float UPM = 0.2 ;      // (UPM) Ukuran Panjang Masker {20 cm})
float ULM = 0.1 ;      // (UPM) Ukuran Lebar  Masker {10 cm})

// Menghitung Luas Kain (LS = Luas Kain )
float LS = PK * LK ;
cout<< "======================================="<< "\n";
cout<< " MENGHITUNG LUAS KAIN"<< "\n";
cout<< "======================================="<< "\n";

cout<< " Luas Kain = Panjang Kain x Lebar Kain "<< "\n";
cout<< LS << " = "<<PK<< " x "<< LK << "\n";
cout<< "======================================="<< "\n";


// Menghitung JUmlah Baju Yang Bisa Dijahit  (JB = Jumlah Baju)
int JB = LS / KPB ;
cout<< " MENGHITUNG JUMLAH BAJU YANG  BISA DI JAHIT"<< "\n";
cout<< "======================================="<< "\n";
cout<< " Jumlah Baju = Luas Kain x Kebutuhan Per Baju"<< "\n";
cout<< JB<< " = "<< LS <<" x "<< KPB << "\n";
cout<< "======================================="<< "\n";

// Menghitung Sisa Kain 
float SK = LS - (JB * KPB);
cout<< " MENGHITUNG SISA KAIN"<< "\n";
cout<< "======================================="<< "\n";
cout<< " Sisa Kain = Luas Kain - ( Jumlah Kain x Kebutuhan per baju )"<< "\n";
cout<<  SK<<  " = "<< LS <<" - "<< "(" << JB << " x "<< KPB << ")" << "\n";
cout<< "======================================="<< "\n";


// Menghitung Jumlah Masker (LM = Luas Masker, JM = Jumlah Masker)
float LM = UPM * ULM ;
float JM = SK / LM ;
cout<< " MENGHITUNG LUAS MASKER | MENGHITUNG JUMLAH MASKER "<< "\n";
cout<< "======================================="<< "\n";
cout<< "Luas Masker = Ukuran Panjang Masker  x Ukuran Lebar Masker "<< "\n";
cout<< LM<< " = "<< UPM << " x " << ULM << "\n";
cout<< "Jumlah Masker = Sisa Kain  : Luas Masker "<< "\n";
cout<< JM<< " = "<< SK << " : " <<  LM << "\n";
cout<< "======================================="<< "\n";


// Menghitung Hasil Pendapatan  (Pendapatan Baju = PB, PM = Pendapatan Masker, TP = Total Pendapatan)
float PB = JB * HB ;
float PM = JM * HM  ;
float TP = PB + PM ;
cout<< "MENGHITUNG HASIL PENDAPATAN"<< "\n";
cout<< "======================================="<< "\n";
cout<< "Pendapatan Baju = Jumlah Baju  x Harga Per Baju "<< "\n";
cout<< fixed << setprecision(0) << PB<< " = "<< JB << " x " << HB << "\n";
cout<< "Pendapatan Masker = Jumlah Masker  x Harga Per Masker "<< "\n";
cout<< fixed << setprecision(0) << PM<< " = "<< JM << " x " <<  HM << "\n";
cout<< "Total Pendapatan = Pendapatan Baju  x Pendapatan Masker "<< "\n";
cout<<  fixed << setprecision(0) <<TP<< " = "<< PB << " + " <<  PM << "\n";
cout<< "======================================="<< "\n";

// Menghitung Keuntungan
cout<< "MENGHITUNG KEUNTUNGAN"<< "\n";
cout<< "======================================="<< "\n";
float K = TP - HK;
cout<< "Keuntungan = Total Pendapatan - Harga Kain "<< "\n";
cout<< K<< " = " << TP << " - " << HK << "\n";


// Output (Kodingan Semesta By Yostiar Aminudin)
cout<< "======================================="<< "\n";
cout<< "HASIL TOTAL SEMUA" << "\n";
cout<< "======================================="<< "\n";

cout << "Hasil Baju yang Bisa Dijahit = " << JB << "\n";
cout << "Hasil Masker Yang Dapat Dibuat  = " << JM << "\n";
cout << "Hasil Keuntungan Bu Tailor Sweet = Rp.  " << K << "\n";
cout<< "======================================="<< "\n";
cout<< "Yostiar Aminudin  PSTI-D"<< "\n";
cout<< "Calon Full Stack Developer "<< "\n";


return 0;
}