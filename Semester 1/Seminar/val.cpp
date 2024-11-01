// menghitung Indeks Prestasi (IP) mahasiswa Teknik Informatika angkatan 2024 semester ganjil
#include <iostream>
using namespace std;

int main()
{
    string NamaMahasiswa;
    int NPM;
    int matkul;
    int SKS;
    float NilaiKeaktifan;
    float NilaiTugas;
    float NilaiKuis;
    float NilaiUTS;
    float NilaiUAS;
    float NilaiAkhir, NApbi = 0 , NAtd = 0, NApti = 0, NAklk = 0, NApengling = 0, NAekl, NAip, NAalpro, NApp = 0;
    string HurufMutu;
    float AngkaMutu;

    cout << "INPUT NAMA LENGKAP ANDA" << endl;
    cin >> NamaMahasiswa;
    cout << "INPUT NPM ANDA" << endl;
    cin >> NPM;
    cout << "==========================================================================" << endl;
     cout << "PILIH SATU MATA KULIAH" << endl;
        cout << "1. PENDIDIKAN PANCASILA" << endl;
        cout << "2. ALGORITMA DAN PEMROGRAMAN" << endl;
        cout << "3. INDUSTRI PERTANIAN" << endl;
        cout << "4. PENGETAHUAN LINGKUNGAN" << endl;
        cout << "5. PENGANTAR TEKNOLOGI INFORMASI" << endl;
        cout << "6. PENDIDIKAN ETIKA DAN KEARIFAN LOKAL" << endl;
        cout << "7. KALKULUS" << endl;
        cout << "8. TEKNIK DIGITAL" << endl;
        cout << "9. PENDIDIKAN BAHASA INDONESIA" << endl;
    
    do {
        cout << "Masukkan MAta KUliah = "; cin >>matkul;
         cout << "INPUT NILAI KEAKTIFAN (0 - 85) = " << endl;
            cin >> NilaiKeaktifan;
            cout << "INPUT NILAI TUGAS (0 - 85)  = " << endl;
            cin >> NilaiTugas;
            cout << "INPUT NILAI KUIS (0 - 85) = " << endl;
            cin >> NilaiKuis;
            cout << "INPUT NILAI UTS (0 - 85) = " << endl;
            cin >> NilaiUTS;
            cout << "INPUT NILAI UAS (0 - 85) = " << endl;
            cin >> NilaiUAS;
            
        NilaiAkhir = ((0.10 * NilaiKeaktifan) + (0.35 * NilaiTugas) + (0.15 * NilaiKuis) + (0.20 * NilaiUTS) + (0.20 * NilaiUAS));
        if (NilaiAkhir >= 76 && NilaiAkhir <= 85)
        {
            HurufMutu = "A";
            AngkaMutu = 4;
        }
        else if (NilaiAkhir >= 71 && NilaiAkhir <= 75.9)
        {
            HurufMutu = "B+";
            AngkaMutu = 3.5;
        }
        else if (NilaiAkhir >= 66 && NilaiAkhir <= 70.9)
        {
            HurufMutu = "B";
            AngkaMutu = 3;
        }
        else if (NilaiAkhir >= 61 && NilaiAkhir <= 65.9)
        {
            HurufMutu = "C+";
            AngkaMutu = 2.5;
        }
        else if (NilaiAkhir >= 55 && NilaiAkhir >= 60.9)
        {
            HurufMutu = "C";
            AngkaMutu = 2;
        }
        else if (NilaiAkhir >= 50 && NilaiAkhir >= 54.9)
        {
            HurufMutu = "D";
            AngkaMutu = 1;
        }
        else
        {
            HurufMutu = "E";
            AngkaMutu = 2;
        }

        
        switch (matkul)
        {
        case 1:
            cout << "1. PENDIDIKAN PANCASILA" << endl;
            NApp = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH PENDIDIKAN PANCASILA = " << NApp << endl;
            cout << "Huruf Mutu = " <<HurufMutu << endl; 
            cout << "Angka Mutu = " << AngkaMutu << endl;
            break;

        case 2:
            cout << "2. ALGORITMA DAN PEMROGRAMAN" << endl;
            NAalpro = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH ALGORITMA DAN PEMROGRAMAN = " << NAalpro << endl;
      cout << "Huruf Mutu = " <<HurufMutu << endl; 
            cout << "Angka Mutu = " << AngkaMutu << endl;
            break;

        case 3:
            cout << "3. INDUSTRI PERTANIAN" << endl;
            NAip = NilaiAkhir;
        cout << "Huruf Mutu = " <<HurufMutu << endl; 
            cout << "Angka Mutu = " << AngkaMutu << endl;
            break;

        case 4:
            cout << "4. PENGETAHUAN LINGKUNGAN" << endl;
            NApengling = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH PENGETAHUAN LINGKUNGAN = " << NApengling << endl;
            
            break;

        case 5:
            cout << "5. PENGANTAR TEKNOLOGI INFORMASI" << endl;
            NApti = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH PENGANTAR TEKNOLOGI INFORMASI = " << NApti << endl;
            break;

        case 6:
            cout << "6. PENDIDIKAN ETIKA DAN KEARIFAN LOKAL" << endl;
          //

            NAekl = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH ETIKA DAN KEARIFAN LOKAL = " << NAekl << endl;
            break;

        case 7:
            cout << "7. KALKULUS" << endl;
          //
            NAklk = NilaiAkhir;
            break;

        case 8:
            cout << "8. TEKNIK DIGITAL" << endl;
          //

            NAtd = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH TEKNIK DIGITAL = " << NAtd << endl;
            break;

        case 9:
            cout << "9. PENDIDIKAN BAHASA INDONESIA" << endl;
          //
            NApbi = NilaiAkhir;
            break;
        default:
            cout << "Mohon maaf anda keluar dari program" << endl;
        }

    } while (matkul >= 1 && matkul <= 9);
}