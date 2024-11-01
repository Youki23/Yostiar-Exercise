#include <iostream>

using namespace std;
int main () {
int X , i, o ;
 bool found ;
 int Elvira[10];
 // Algoritma
 cout << "Data Input = " << endl;

for ( i = 0; i < 10; i++)
{
    cin >> Elvira[i];
    cout << " ";
    
}

 // Pengisi data : asumsi array terisi

 // mnecari suatu nilai, yaitu x

 cin >> X;
 i =0;
 found = false;

 while ( (i < 10) and (!found)){
 if ( Elvira[i] == X){ 
    found = true;
 } else {
    i++;
 } } // i = 10 atau found

 if (found) 
 {
cout << X << " ada di indeks " << i ;
 } else{
cout << X << "tidak ditemukan " ;

 }
 

 

return 0;
}