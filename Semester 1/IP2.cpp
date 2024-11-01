#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
int main() {
    // Deklarasi
    string namamhs, NPM, penyebutmatkul, strip = "---------------------------------------------------------\n", pembatas = "=================================\n";
    int matkul, SKS, totalSKS = 0;
    float Nilaktif, Tugas, Quiz, UTS, UAS, totalnilai, angkamutu, totalmutu = 0,  IP;
    char decision;
    string hurufmutu, outputhm, status;

    // Algoritma
    cout << "Sistem Penghitungan Indeks Prestasi" << "\n" << pembatas;
    cout << "Masukan Nama Mahasiswa = "; getline(cin,namamhs);
    cout << "Masukkan NPM = "; cin >> NPM;
    cout << strip;
    cout << "\nMATA KULIAH SEMESTER INI\n";
    cout << "1. Kalkulus\n"
         << "2. Teknik Digital\n"
         << "3. Pendidikan Pancasila\n"
         << "4. Pengetahuan Lingkungan\n"
         << "5. Pengantar Teknologi Informasi\n"
         << "6. Pendidikan Etika dan Kearifan Lokal\n"
         << "7. Pengetahuan Industri Pertanian\n"
         << "8. Pendidikan Bahasa Indonesia\n"
         << "9. Algoritma dan Pemograman\n";
    cout << strip;

    // Penggunaan Switch 
    do {
        cout << "Masukan Mata Kuliah = "; cin >> matkul;

        // Input nilai
        cout << "Masukkan Nilai SKS = "; cin >> SKS;
        cout << "Masukkan Nilai Keaktifan (0-85) = "; cin >> Nilaktif;
        cout << "Masukkan Nilai Tugas (0-85) = "; cin >> Tugas;
        cout << "Masukkan Nilai Quiz (0-85) = "; cin >> Quiz;
        cout << "Masukkan Nilai UTS (0-85) = "; cin >> UTS;
        cout << "Masukkan Nilai UAS (0-85) = "; cin >> UAS;

        // Proses Penjumlahan Nilai
        totalnilai = (Nilaktif * 0.10) + (Tugas * 0.35) + (Quiz * 0.15) + (UTS * 0.20) + (UAS * 0.20);

        // Konversi Nilai ke Huruf Mutu dan Angka Mutu
        if (totalnilai >= 76) { hurufmutu = "A"; angkamutu = 4.0;  status = "Lulus" ;}
        else if (totalnilai >= 71) { hurufmutu = "B+"; angkamutu = 3.5; status = "Lulus"; }
        else if (totalnilai >= 66) { hurufmutu = "B"; angkamutu = 3.0;  status = "Lulus"; }
        else if (totalnilai >= 61) { hurufmutu = "C+"; angkamutu = 2.5; status = "Lulus"; }
        else if (totalnilai >= 55) { hurufmutu = "C"; angkamutu = 2.0;  status = "Lulus";}
        else if (totalnilai >= 50) { hurufmutu = "D"; angkamutu = 1.0;  status = "Lulus";}
        else { hurufmutu = "E"; angkamutu = 0.0; status = "Tidak Lulus";}

        // Menghitung total mutu
        totalSKS += SKS;
        // Untuk Kebutuhan Switch
        string tab = "\t";
        string enter = "\n";
        stringstream fixtotalnilai;
        fixtotalnilai <<fixed<< setprecision(1) <<totalnilai;
        stringstream fixangkamutu;
        fixangkamutu <<fixed<< setprecision(1) <<angkamutu;

     switch (matkul) {
            case 1: penyebutmatkul += "Kalkulus" +tab + tab +tab + tab + to_string(SKS) + tab + fixtotalnilai.str() + tab + hurufmutu + tab +fixangkamutu.str() +tab+ status+ enter; break;
            case 2: penyebutmatkul += "Teknik Digital"+tab + tab + tab+ tab + to_string(SKS) + tab +fixtotalnilai.str() + tab + hurufmutu + tab +fixangkamutu.str()+tab +status+ enter; break;
            case 3: penyebutmatkul += "Pendidikan Pancasila"+tab + tab  + tab +to_string(SKS) + tab +fixtotalnilai.str() + tab + hurufmutu + tab +fixangkamutu.str() +tab+status+ enter; break;
            case 4: penyebutmatkul += "Pengetahuan Lingkungan"+ tab +tab + tab  +to_string(SKS) + tab +fixtotalnilai.str() + tab + hurufmutu + tab +fixangkamutu.str() +tab+status+enter; break;
            case 5: penyebutmatkul += "Pengantar Teknologi Informasi"+ tab + tab + to_string(SKS) + tab +fixtotalnilai.str() + tab + hurufmutu + tab +fixangkamutu.str()+tab +status+enter; break;
            case 6: penyebutmatkul += "Pendidikan Etika dan Kearifan Lokal"+ tab + to_string(SKS) + tab +fixtotalnilai.str() + tab + hurufmutu + tab +fixangkamutu.str()+tab +status+enter; break;
            case 7: penyebutmatkul += "Pengetahuan Industri Pertanian"+tab+ tab + to_string(SKS) + tab +fixtotalnilai.str() + tab + hurufmutu + tab +fixangkamutu.str()+tab +status+enter; break;
            case 8: penyebutmatkul += "Pendidikan Bahasa Indonesia"+ tab + tab + to_string(SKS) + tab +fixtotalnilai.str() + tab + hurufmutu + tab +fixangkamutu.str()+tab +status+enter; break;
            case 9: penyebutmatkul += "Algoritma dan Pemograman"+ tab + tab + to_string(SKS) + tab +fixtotalnilai.str() + tab + hurufmutu + tab +fixangkamutu.str()+tab +status+enter; break;

            default: cout << "Pilihan Diluar System, Silahkan Coba Lagi\n"; continue;
        }
        // Output Menambahkan Mata Kuliah
        cout << strip;
        cout << "Ingin Menambahkan Mata Kuliah Selanjutnya? (Y) Iya / (T) Tidak = ";
        cin >> decision;

    } while (decision == 'y'  or decision == 'Y'); 

    // Menghitung IP Semester
     totalmutu += angkamutu * totalSKS;
    IP = totalmutu /totalSKS;

    // Output Kartu Hasil Studi
    cout << "\n================== Kartu Hasil Studi ==================\n";
    cout << "Nama Mahasiswa : " << namamhs << "\n";
    cout << "NPM            : " << NPM << "\n";
    cout << strip;
    cout << "MATA KULIAH                             SKS     NA      HM      AM      Status\n";
    
    // Tampilkan data mata kuliah dan nilai yang telah dihitung
    cout << penyebutmatkul;

    // Close table
    cout << strip << left << setw(52) << "IP Semester : " << fixed << setprecision(2) << IP << "\n";
    cout << strip << left << setw(52) << "Total SKS : " << fixed << setprecision(2) << totalSKS << "\n";


    return 0;
}
