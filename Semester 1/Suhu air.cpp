#include <iostream>
using namespace std;
int main () {
//Deklarasi
int nomer ;

//Algoritma
cout << "PROGRAM MENGHITUNG SUHU AIR" << "\n";
cout << "==========================="<< "\n";

cout << "Masukan Suhu = ";
cin >> nomer ; 
if  ( nomer <= 0) {
cout << "SUHU AIR = BEKU" << "\n";
}else if ( nomer >= 100) {
cout << "SUHU AIR = UAP" << "\n";
} else {
cout << "SUHU AIR = CAIR" << "\n";
cout << "==========================="<< "\n";
cout << "Yostiar Aminudin 2415061016";


}
return 0;





}