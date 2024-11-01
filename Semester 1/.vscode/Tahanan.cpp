#include <iostream>
using namespace std;
int main () {
    // Deklarasi
 int R1;
 int R2;
 int R3;


cout << "PENGHITUNGAN  TAHANAN DENGAN RUMUS" << "\n";
cout << "=========================" << "\n" ;
cout << "Masukan Tahanan, dan tahanan tidak boleh negatif" << "\n";
cout << "=========================" << "\n" ;

cout << "Masukkan Tahanan 1 =" << "\n" ;
cin >> R1; 
cout << "Masukkan Tahanan 2 = "<< "\n" ;
cin >> R2;
cout << "Masukkan Tahanan 3 = "<< "\n" ;
cin >> R3;


if (R1 >= 0 && R2>= 0 && R3 >= 0 ){
    cout << "Tahanan Adalah Bilangan Positif" << "\n";
    int Rtotal =  R1 + R2 + R3;
    cout << "Rtotal = R1 + R2 + R3 "<< "\n" ;
    cout << Rtotal << " = " << R1 << " + " << R2<< " + " << R3<< "\n" ;


} else {
    cout <<  "Salah Satu Tahanan Ada Yang Bilangan Negatif " << "\n";

}
cout << "=========================" << "\n" ;
cout << "Yostiar Aminudin 2415061016 " << "\n" ;



return 0; 
}