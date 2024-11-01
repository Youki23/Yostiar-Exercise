#include <iostream>
using namespace std;
int main() {
int i ;
int x;
cout << "MENCETAK ANGKA BERURUTAN"<< "\n";
cout << "================================" << "\n";
cout << "Masukan Nilai untuk awal = " ;
cin >> i;
cout << "Masukan Nilai untuk akhir = " ;
cin >> x;

while (i <= x) {
cout << i << " ";
i++;
}
cout << "\n";
cout << "================================" << "\n";
cout << "By Yostiar Aminudin PSTI-D 2415061016" << "\n";
return 0;
}
/*
  Pertanyaan : (Yostiar Aminudin Calon Full Stack Dev )
     1. Apa yang menjadi output kode diatas ?
        Jawaban : 6 ( angka 6)
     2. Mengapa tidak ada angka yang dicetak di dalam loop? 
        Jawaban : karena penempatan kode cout << i << diluar baris while (Looping)
     3. Bagaimana cara memperbaiki agar angka 1 sampai 5 dicetak?   
        Jawaban : 1. pindahkan kode  cout << i << endl; yang berada diluar baris menjadi didalam baris
                     dari yang 
                     while (i <= 5) {
                     i++;
                     }
                    cout << i << endl;
                     menjadi seperti ini ( Saya akan memodifikasi karena saya rasa saya bisa membuatnya lebih baik.)
                     while (i <= x) {    (kenapa while nya dari while (i <= 5)  menjadi while (i <= x) karena saya ingin membebaskan angka awal dan angka akhirnya) 
                     cout << i << " "; (Mengapa Void atau kosong karena saya sendiri lebih suka kode ini memanjang bukan kebawah)
                     i++;
                     }

Sekian Penjelasan Dari ( Calon Full Stack Developer)                     
  */                   