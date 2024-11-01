#include <iostream>
using namespace std;
int main() {
cout<< "Menghitung Kotak Granit, Upah Pak Nitgra, dan Total Biaya "<< endl;
cout<< "_____________________"<< endl;
// Deklarasi
int UPN = 27500;   //  (UPM) Upah Pak Nitgra
int HGK = 185000;  //  (HKG) Harga Kotak Granit
float PG = 0.6;     //  (PG) Panjang Granit {6 cm}
float LG = 0.6;     //  (LG) Lebar Granit {6 cm}
float PRT = 4.0;    //(  (PRT) Panjang Ruang Tamu = Dalam Meter)
float LRT = 3.0;    //(  (LRT) Lebar Ruang Tamu = Dalam Meter)
int PRK = 6;     //(   (PRK) Panjang Ruang Keluarga)
int LRK = 5;    //(   (LRK) Luas Ruang Keluarga)

// Menghitung Luas Ruang Tamu (LRTU = Luas Ruang Tamu)
int LRTU = PRT * LRT;
cout<< "Menghitung Luas Ruang Tamu"<< endl;
cout<< "____________________"<< endl;
cout<< "Luas Ruang Tamu = Panjang Ruang Tamu x Luas Ruang Tamu"<< endl;
cout<< LRTU <<" = "<< PRT <<" X "<< LRT << endl;
cout<< "____________________"<< endl;

// Menghitung Luas Ruang Keluarga (LRKG = Luas Ruang Keluarga)
int LRKG = PRK * LRK;
cout<< "Menghitung Luas Ruang Keluarga"<< endl;
cout<< "____________________"<< endl;
cout<< "Luas Ruang Keluarga = Panjang Ruang Keluarga x Luas Ruang Keluarga"<< endl;
cout<< LRKG <<" = "<< PRK <<" x "<< LRK << endl;
cout<< "____________________"<< endl;

// Menghitung Luas Total (LT = Luas Total)
int LT = LRTU + LRKG;
cout<< "Menghitung Luas Total"<< endl;
cout<< "_____________________"<< endl;
cout<< "Luas Total = Luas Ruang Tamu + Luas Ruang Keluarga"<< endl;
cout<< LT <<" = "<< LRTU <<" + "<< LRKG << endl;
cout<< "_____________________"<< endl;

// Menghitung luas Granit per Buah (LGPB = Luas Granit per Buah)
float LGPB = PG * LG;
cout<< "Menghitung Luas Granit per Buah"<< endl;
cout<< "______________________"<< endl;
cout<< "Luas Granit per Buah = Panjang Granit x Luas Granit"<< endl;
cout<< LGPB <<" = "<< PG <<" x "<< LG << endl;
cout<< "______________________"<< endl;

// Menghitung Jumlah Granit yang Dibutuhkan (JGD = Jumlah Granit yang Dibutuhkan)
float JGD = LT / LGPB;
cout<< "Menghitung Jumlah Granit yang Dibutuhkan"<< endl;
cout<< "______________________"<< endl;
cout<< "Jumlah Granit yang Dibutuhkan = Luas Total / Luas Granit per Buah"<< endl;
cout<< JGD <<" = "<< LT <<" / "<< LGPB << endl;
cout<< "______________________"<< endl;

// Menghitung Jumlah Kotak Granit (JKG = Jumlah Kotak Granit)
int JKG = JGD / 3;
cout<< "Menghitung Jumlah Kotak Granit"<< endl;
cout<< "______________________"<< endl;
cout<< "Jumlah Kotak Granit = Jumlah Granit / 3"<< endl;
cout<< JKG <<" = "<< JGD <<" / "<< 3 << endl;
cout<< "______________________"<< endl;

// Menghitung Upah Tukang (UT = Upah Tukang)
int UT = LT * UPN;
cout<< "Menghitung Upah Pak Nitgra"<< endl;
cout<< "______________________"<< endl;
cout<< "Upah Pak Nitgra  = Luas Total x Upah per Meter"<< endl;
cout<< UT <<" = "<< LT <<" x "<< UPN << endl;
cout<< "______________________"<< endl;

// Menghitung Biaya Total Granit (BTG = Biaya Total Granit)
int BTG = JKG * HGK;
cout<< "Menghitung Biaya Total Granit"<< endl;
cout<< "______________________"<< endl;
cout<< "Biaya Total Granit = Jumlah Kotak Granit x Harga Granik per Kotak"<< endl;
cout<< BTG <<" = "<< JKG <<" x "<< HGK << endl;
cout<< "______________________"<< endl;

// Menghitung Total Biaya (TB = Total Biaya)
int TB = BTG + UT;
cout<< "Menghitung Total Biaya"<< endl;
cout<< "______________________"<< endl;
cout<< "Total Biaya = Biaya Total Granit + Upah Pak Nitgra"<< endl;
cout<< TB <<" = "<< BTG <<" + "<< UT << endl;
cout<< "______________________"<< endl;

// Output hasil
cout << "Jumlah kotak granit yang dibutuhkan: " << JKG << endl;
cout << "Upah yang akan diterima Pak Nitgra: Rp " << UT << endl;
cout << "Total biaya yang arus dikeluarkan pak Ali: Rp " << TB << endl;

    return 0;
}