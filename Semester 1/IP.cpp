#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main () {
// Deklarasi
string namamhs;
string NPM;
int matkul,SKS;
float Nilaktif, Tugas, Quiz, UTS, UAS;
char decision;
string penyebutmatkul;
string strip = "---------------------------------------------------------\n";
string pembatas = "=================================\n";
// Penambahan
float totalnilai;
string hurufmutu;
float angkamutu;
string outputhm; // (Output Huruf Mutu)

// ALgoritma
cout << "Sistem Penghitungan Indeks Prestasi" << "\n" << pembatas;
cout << "Masukan Nama Mahasiswa = "; cin >> namamhs;
cout <<"Masukkan NPM = "; cin >> NPM;
pembatas = "\n=================================\n";
cout << pembatas;
cout << "MATA KULIAH SEMESTER INI\n";
cout << "1. Kalkulus\n"  
     << "2. Teknik Digital\n"
     << "3. Pendidikan Pancasila\n"
     << "4. Pengetahuan Lingkungan\n"
     << "5. Pengantar Teknologi Informasi\n"
     << "6. Pendidikan Etika dan Kearifan Lokal\n"
     << "7. Pengetahuan Industri Pertanian\n"
     << "8. Pendidikan Bahasa Indonesia\n";
cout << strip;

// Penggunaan Switch 
do{
cout << "Masukan Mata Kuliah = "; cin >> matkul;
switch (matkul){
case 1:
// Output 
cout << "Mata Kuliah = Kalkulus\n";
penyebutmatkul += "Kalkulus";
break;
case 2:                                                                              // Case 2
// Output
cout << "Mata Kuliah = Teknik Digital\n";
penyebutmatkul += "Teknik Digital";
break;
case 3:                                                                                   //case 3
//Output
cout << "Mata Kuliah = Pendidikan Pancasila\n";
penyebutmatkul += "Pendidikan Pancasila";
break;
case 4:                                                                              //case 4
//Output
cout << "Mata Kuliah = Pengetahuan Lingkungan\n";
penyebutmatkul += "Pengetahuan Lingkungan";
break;
case 5:                                                                                                       //case 5
// Output
cout << "Mata Kuliah = Pengantar Teknologi Informasi\n";
penyebutmatkul += "Pengantar Teknologi Informasi";
case 6:                                                                                        //case 6
// Output
cout << "Mata Kuliah = Pendidikan Etika dan Kearifan Lokal\n";
penyebutmatkul += "Pendidikan Etika dan Kearifan Lokal";
 break;
case 7:                                                                                             //case 7
// Output
cout << "Mata Kuliah = Pengetahuan Industri Pertanian\n";
penyebutmatkul += "Pengetahuan Industri Pertanian";
 break;
case 8:                                                                                             //case 8
// Output
cout << "Mata Kuliah = Pendidikan Bahasa Indonesia\n";
penyebutmatkul += "Pendidikan Bahasa Indonesia";
break;

default:
cout << "Pilihan Diluar System, Silahkan Coba Lagi";
break;
} 
if (matkul >0 and matkul < 9)
{
// Input Nilai System
if (matkul >0 and matkul < 9){
cout << "Masukkan Nilai SKS = "; cin >> SKS;
cout << "Masukkan Nilai Keaktifan (0-85) = "; cin >> Nilaktif;
cout << "Masukkan Nilai Tugas (0-85) = "; cin >> Tugas;
cout << "Masukkan Nilai Quiz (0-85) = "; cin >> Quiz;
cout << "Masukkan Nilai UTS (0-85) = "; cin >> UTS;
cout << "Masukkan Nilai UAS (0-85) = "; cin >> UAS;
}else{
cout << "Pilihan diluar System, silahkan coba lagi dengan nomor yang ada didalam sistem.";   
}
cout << strip;
// Proses Penjumlahan Nilai System
// Nilai  Keaktifan (10%), Tugas (35%), Quiz (15%), UTS (20%), UAS (20%)
totalnilai = (Nilaktif * 0.10 ) + (Tugas * 0.35 ) + (Quiz * 0.15 ) + (UTS * 0.20 ) + (UAS* 0.20); 
// Output Total Nilai ( Nilai Akhir)

// Konversi Nilai
// Konversi
totalnilai;
if (totalnilai >= 76){
 cout<< "Huruf Mutu =  A\n";
 cout << "Angka Mutu = 4\n";
 cout << "Status : Lulus\n";
}else if (totalnilai >=71){
 cout << "Huruf Mutu = B+\n";
 cout << "Angka mutu = 3,5\n";
 cout << "Status : Lulus\n";
}else if (totalnilai >=66){
 cout << "Huruf Mutu = B\n";
 cout << "Angka Mutu = 3\n";
 cout << "Status : Lulus\n";
} else if (totalnilai >=61){
 cout << "Huruf Mutu = C+\n";
 cout << "Angka Mutu = 2,5\n";
 cout << "Status : Lulus\n";
}else if (totalnilai >=55){
 cout << "Huruf Mutu = C\n";
 cout << "Angka Mutu = 2\n";
 cout << "Status : Lulus\n";
} else if (totalnilai >=50){
 cout << "Huruf Mutu = D\n";
 cout << "Angka Mutu = 1";
 cout << "Status : Lulus\n";
}else if (totalnilai < 55){
 cout << "Huruf Mutu = E\n";
 cout << "Angka Mutu = 0";
 cout << "Status : Tidak Lulus\n";
}
// Konversi Huruf Mutu
// Huruf Mutu
if (totalnilai >= 76){
 hurufmutu = "A";
}else if (totalnilai >=71){
hurufmutu = "B+";
}else if (totalnilai>= 66 ){
hurufmutu = "B";
} else if (totalnilai >= 61){
hurufmutu = "C+";
}  else if (totalnilai >= 55){
hurufmutu = "C";
}else if (totalnilai >= 50 ){
hurufmutu = "D" ;   
}else if (totalnilai <55){
hurufmutu = "E";    
} 

// Output Huruf mutu
 outputhm += hurufmutu ;
// Konversi Angka Mutu
// Angka mutu
if (hurufmutu == "A"){
angkamutu = 4.0;
}else if (hurufmutu == "B+"){
angkamutu = 3.5;
}else if (hurufmutu == "B"){
angkamutu = 3.0;
} else if (hurufmutu == "C+"){
angkamutu = 2.5;
}  else if (hurufmutu == "C"){
angkamutu = 2.0;
}else if (hurufmutu == "D"){
angkamutu = 1.0;   
}else if (hurufmutu == "E"){
angkamutu = 0.0;    
} 
// Output Angkamutu
 angkamutu;
} else {
cout << "Pilihan Tidak Sesuai Kategori, Coba lagi !.";     
}
// Output Looping
cout << "Ingin Menambahkan Mata Kuliah Selanjutnya?";
cout << "(Y) Iya / (T)Tidak = ";
cin >> decision;
}while (decision == 'y' or decision == 'Y') ;


// Menghitung total mutu
float totalmutu;
totalmutu = angkamutu * SKS;

//  Menghitung IP Semester
float IP;
if (SKS > 0) {
IP = totalmutu / SKS;
}


// Output Menampilkan Kartu Hasil Studi
cout << "\n================== Kartu Hasil Studi ==================\n";
cout << "Nama Mahasiswa : " << namamhs <<"\n";
cout << "NPM            : " << NPM << "\n\n";
cout << strip ;
 


cout <<"NO  MATA KULIAH           SKS  NILAI AKHIR   HM   AM    " << endl ;   
// string Yostiarfix = penyebutmatkul + "          " + to_string(SKS) + "  " +to_string(totalnilai) + "   " +  outputhm + "   " + to_string(angkamutu) + "\n" ;

// cout << Yostiarfix;
cout << penyebutmatkul << "          " << SKS << "        " << totalnilai << "       " << outputhm << "      " << angkamutu << "\n";


// Close table
cout << endl << strip  << left << setw(52) << "IP Semester : "
     << fixed << setprecision(2) << IP <<  "\n";

return 0;
}