#include <iostream>
using namespace std;

int main () {
int umur ;
char jawaban ;

cout << " Masukan umur kamu ! \numur = " ;
cin >> umur;
//IF ELSE UTAMA
if (umur >= 0) {      

// Nested if - 1
if  (umur >= 17) {
    cout << "Kamu Sudah Punya SIM" << "\n" << "Y (Ya) / T (Tidak) ";
    cin >> jawaban;

// Nested if - 2
if (jawaban == 'y' || 'Y') {
cout << "Kamu boleh membawa kendaraan!";
} else if (jawaban == 't' || 'T') {
cout << "Kamu belum boleh membawa kendaraan";
} else {
cout << "Jawaban tidak valid, coba lagi dengan karakter yang sudah ditentukan";


// Penutup nested if 1 
    } 
        } else {
        cout <<  "Kamu belum cukup umur.";
       
            }
// Peutup if utama            
                } else {
                    cout << " Umur Tidak Valid Keluar Dari Program " ;
                }
                return 0;
}


