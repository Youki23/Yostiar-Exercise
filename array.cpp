#include <iostream>

using namespace std;
int main () {
int sum, o;
int Elvira[10];

// mengisi data nilai dari input user
cout <<  "Isilah 10 data nilai dalam range 0-100" << endl;
for ( o = 0; o < 10; o++)
{
    cin >> Elvira[o];
}
// Menjumlahkan Nilai dan Menghitung rata-rata
cout << "Data Input = " << endl;
sum = 0;
for ( o = 0; o < 10; o++)
{
    cout << Elvira[o] << endl;
    sum = sum + Elvira[o];
}

cout << "Rata-rata = ";
cout << (float)sum/10.0 << endl; 
return 0;
}