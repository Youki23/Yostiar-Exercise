// menghitung Indeks Prestasi (IP) mahasiswa Teknik Informatika angkatan 2024 semester ganjil
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
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
    float NilaiAkhir, NApbi = 0, NAtd = 0, NApti = 0, NAklk = 0, NApengling = 0, NAekl, NAip, NAalpro, NApp = 0;
    string HurufMutu, daftarmatkul;
    float AngkaMutu;
    string LanjutProgram;
    float TotalMutu;
    int TotalSKS;
    float IPsmst;

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

    do
    {
        cout << "Masukkan Mata Kuliah = ";
        cin >> matkul;
        cout << "INPUT NILAI SKS =" << endl;
        cin >> SKS;
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
        // untuk kebutuhan switch
        string tab = "\t";
        string enter = "\n";
        stringstream FIXna, FIXAM;
        FIXna << fixed << setprecision(1) << NilaiAkhir;
        FIXAM << fixed << setprecision(1) << AngkaMutu;
        FIXAM << fixed << setprecision(1) << AngkaMutu;



            switch (matkul)
        {
        case 1:
            cout << "PENDIDIKAN PANCASILA" << endl;
            NApp = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH PENDIDIKAN PANCASILA = " << NApp << endl;
            cout << "Huruf Mutu = " << HurufMutu << endl;
            cout << "Angka Mutu = " << AngkaMutu << endl;
            daftarmatkul += "PENDIDIKAN PANCASILA" + tab + tab + to_string(SKS) + tab + FIXna.str() + tab + HurufMutu + tab+ tab  + FIXAM.str();
            break;

        case 2:
            cout << "ALGORITMA DAN PEMROGRAMAN" << endl;
            NAalpro = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH ALGORITMA DAN PEMROGRAMAN = " << NAalpro << endl;
            cout << "Huruf Mutu = " << HurufMutu << endl;
            cout << "Angka Mutu = " << AngkaMutu << endl;
            break;

        case 3:
            cout << "INDUSTRI PERTANIAN" << endl;
            NAip = NilaiAkhir;
            cout << "Huruf Mutu = " << HurufMutu << endl;
            cout << "Angka Mutu = " << AngkaMutu << endl;
            break;

        case 4:
            cout << "PENGETAHUAN LINGKUNGAN" << endl;
            NApengling = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH PENGETAHUAN LINGKUNGAN = " << NApengling << endl;
            cout << "Huruf Mutu = " << HurufMutu << endl;
            cout << "Angka Mutu = " << AngkaMutu << endl;
            break;

        case 5:
            cout << "PENGANTAR TEKNOLOGI INFORMASI" << endl;
            NApti = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH PENGANTAR TEKNOLOGI INFORMASI = " << NApti << endl;
            cout << "Huruf Mutu = " << HurufMutu << endl;
            cout << "Angka Mutu = " << AngkaMutu << endl;
            break;

        case 6:
            cout << "PENDIDIKAN ETIKA DAN KEARIFAN LOKAL" << endl;
            NAekl = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH ETIKA DAN KEARIFAN LOKAL = " << NAekl << endl;
            cout << "Huruf Mutu = " << HurufMutu << endl;
            cout << "Angka Mutu = " << AngkaMutu << endl;
            break;

        case 7:
            cout << "KALKULUS" << endl;
            NAklk = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH KALKULUS = " << NAklk << endl;
            cout << "Huruf Mutu = " << HurufMutu << endl;
            cout << "Angka Mutu = " << AngkaMutu << endl;
            break;

        case 8:
            cout << "TEKNIK DIGITAL" << endl;
            cout << "NILAI AKHIR MATA KULIAH ETIKA DAN KEARIFAN LOKAL = " << NAtd << endl;
            NAtd = NilaiAkhir;
            cout << "NILAI AKHIR MATA KULIAH TEKNIK DIGITAL = " << NAtd << endl;
            cout << "Huruf Mutu = " << HurufMutu << endl;
            cout << "Angka Mutu = " << AngkaMutu << endl;
            break;

        case 9:
            cout << "PENDIDIKAN BAHASA INDONESIA" << endl;
            cout << "NILAI AKHIR MATA KULIAH ETIKA DAN KEARIFAN LOKAL = " << NApbi << endl;
            NApbi = NilaiAkhir;
            cout << "Huruf Mutu = " << HurufMutu << endl;
            cout << "Angka Mutu = " << AngkaMutu << endl;
            break;
        default:
            cout << "Mohon maaf anda keluar dari program" << endl;
        }
        // Melanjutkan looping atau tidak

        cout << "==============================================================================" << endl;
        cout << "Apakah anda ingin melanjutkan ke mata kuliah berikutnya?" << endl;
        cin >> LanjutProgram;

    } while (LanjutProgram == "Y" or LanjutProgram == "y");
    // Menghitung IP semester
    TotalMutu = +AngkaMutu * SKS;
    IPsmst = TotalMutu / SKS;
    // output hasil akhir
    cout << "KARTU HASIL STUDI" << endl;
    cout << "NAMA MAHASISWA:" << NamaMahasiswa << endl;
    cout << "NPM:" << NPM << endl;
    cout << "MATA KULIAH                    SKS      NA      HURUF MUTU      ANGKA MUTU" << endl;
    cout << daftarmatkul;
}
