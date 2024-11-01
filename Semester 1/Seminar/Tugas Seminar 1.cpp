#include <iostream>
using namespace std;
int main()
{
    // Deklarasi
    int angka;
    // Algoritma
    cout << "CEK BILANGAN POSITIF DAN NEGATIF" << "\n";
    cout << "================================" << "\n";
    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka > 0) {
        cout << "Angka positif!" << "\n";
    } else if (angka < 0){
        cout << "Angka negatif!" << "\n";
    }else{
        cout << "Angka Netral bukan positif dan negatif" << "\n";
    }
    cout << "================================" << "\n";
    cout << "By Yostiar Aminudin PSTI-D 2415061016" << "\n";

    return 0;
}
  /*
  Pertanyaan : (Yostiar Aminudin Calon Full Stack Dev )
   1. Apa yang salah dari kode diatas ?
    
    Jawaban :
    bagian dalam if else tersebut tidak seharusnya menggunakan
     if (angka > 0 || angka < 0) {
     cout << "Angka positif!" << endl;
    } else {
    cout << "Angka negatif!" << endl;
    }
    karena jika memakai itu seperti yang sudah dijelaskan di seminar,
    jika salah satu nya nilai itu masuk dia akan selalu menjawab if yang pertama
    yang menjadikan berapapun bilangan yang dimasukan akan mterjawab positif
    terkecuali bilangan 0 ia akan menjawabnya dengan negatif.

    2, Bagaimana cara memperbaiki agar output sesuai dengan input pengguna?
    maka sebaiknya menggunakan kode :
    if (angka > 0 ) {
    cout << "Angka positif!" << "\n";
    } else if (angka < 0 ) {                            
    cout << "Angka negatif!" << "\n";
    } else{
    cout << "Angka Netral bukan positif dan negatif" << "\n";   
    }
   
   Dengan demikian kode akan berjalan sesuai dengan perintah/ input yang kita berikan .
  */