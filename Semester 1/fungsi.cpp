#include <iostream>

using namespace std;
string fungsiperbedaan (int x) {
string cekbilangan;
    if( x > 0){
    cekbilangan = "Bilangan Positif !\n "; 
    }else if (x < 0) {
    cekbilangan = " Bilangan Negatif !\n";    
    } else {
    cekbilangan =" Bilangan Netral\n";       
    }

return  (cekbilangan);
}

int main () {
int x;
cout << "SYSTEM CEK BILANGAN (POSITIF/ NEGATIF / NETRAL)\n";
cout << "===============================================\n";
 cout << "Masukkan Nomer = ";
 cin >> x;
 string hasil = fungsiperbedaan(x);
cout << "Maka Bilangan Adalah = " << hasil   << endl;
return 0;
}