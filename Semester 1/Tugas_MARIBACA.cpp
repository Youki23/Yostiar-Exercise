//MARIBACA
#include <iostream>
using namespace std;
int main () {
// Deklarasi     
int hargabuku;
int Total = 0;
int diskon;
int sisadiskon; 
int uangyosti;
int kembalian;
// Atasan Struk
cout << "\t" <<  "   TOKO MARIBACA" << "\n";
cout << "=================================="<< "\n";                                 // Atasan
cout << "Masukan Total Belanjaan Buku = "; cin >> hargabuku; cout <<"Yostiar Aminudin PSTI - D" <<"\n";
cout << "=================================="<< "\n";

// Program Percabangan Yostiar Aminudin
if (hargabuku >= 100000 && hargabuku <150000){
diskon = hargabuku - (hargabuku * 7/100);                                            // Pencabangan 1 
Total += diskon;
sisadiskon = hargabuku * 7/100;
cout << "Mendapatkan Diskon 7%" << "\n";
cout << "Harga Asli Buku""\t " << "\t" << " = "  << hargabuku << "\n";
cout << "Potongan Diskon" << "\t " << "\t" << " = " << sisadiskon << "\n" ;

} else if (hargabuku >= 150000 && hargabuku <250000){
diskon = hargabuku - (hargabuku * 10/100);
Total += diskon;                                                                     // Pencabangan 2
sisadiskon = hargabuku * 10/100;
cout << "Mendapatkan Diskon 10%" << "\n";
cout << "Harga Asli Buku""\t " << "\t" << " = "  << hargabuku << "\n";
cout << "Potongan Diskon" << "\t " << "\t" << " = " << sisadiskon << "\n" ;

} else if (hargabuku >= 250000 ){
diskon = hargabuku - (hargabuku * 12/100);
Total += diskon;                                                                     // Pencabangan 3
sisadiskon = hargabuku * 12/100;
cout << "Mendapatkan Diskon 12%" << "\n";
cout << "Harga Asli Buku""\t " << "\t" << " = "  << hargabuku << "\n";
cout << "Potongan Diskon" << "\t " << "\t" << " = " << sisadiskon << "\n" ;


}else {
cout << "Harga Asli Buku = " << hargabuku << "\n" ;                                  // Pencabangan 4
     Total += hargabuku;
}

cout << "=================================="<< "\n";
cout << "Total Belanja" << "\t"  << "\t" <<" = " << hargabuku << "\n";              // Bawahan
if (hargabuku >= 100000)
{
cout << "Harga Diskon"<< "\t " << "\t" <<" = "<< diskon << "\n"; 

} else {

}


cout << "Total Yang Perlu Dibayar  = " << Total <<"\t"<< "\n";
cout << "=================================="<< "\n";
cout << "Masukan Jumlah Uang Anda  = "; cin >> uangyosti ;
kembalian = uangyosti - Total ;
cout << "Kembali Uang   = " << kembalian <<"\t"<< "\n";




return 0;


}