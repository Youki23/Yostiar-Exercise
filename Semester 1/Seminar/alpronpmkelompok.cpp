// menghitung Indeks Prestasi (IP) mahasiswa Teknik Informatika angkatan 2024 semester ganjil
#include <iostream>
using namespace std;

int main()
{
    string NamaMahasiswa;
    int NPM;
    int matkul;
    int SKS, SKSpbi, SKSpp, SKSekl, SKSAlpro, SKSPengling, SKStd, SKSpti, SKSip, SKSklk;
    float NilaiKeaktifan, NilaiKeaktifanPP, NilaiKeaktifanPBI, NilaiKeaktifanAlpro, NilaiKeaktifanIP,
        NilaiKeaktifanTD, NilaiKeaktifanKLK, NilaiKeaktifanEKL, NilaikeaktifanPengling, NilaiKeaktifanPTI;
    float NilaiTugas, tugaspbi, tugaspp, tugastd, tugaspengling, tugasip, tugaspti, tugasklk, tugasekl, tugasalpro;
    float NilaiKuis, kuispbi, kuispti, kuisalpro, kuisklk, kuisip, kuispp, kuisekl, kuistd, kuispengling;
    float NilaiUTS, utspbi, utspp, utspti, utsip, utspengling, utsklk, utsekl, utstd, utsalpro;
    float NilaiUAS, uaspbi, uastd, uasklk, uaspti, uaspengling, uasekl, uasalpro, uasip, uaspp;
    float NilaiAkhir, NApbi, NAtd, NApti, NAklk, NApengling, NAekl, NAip, NAalpro, NApp;

    cout << "INPUT NAMA LENGKAP ANDA" << endl;
    cin >> NamaMahasiswa;
    cout << "INPUT NPM ANDA" << endl;
    cin >> NPM;
    cout << "==========================================================================" << endl;
    do
    {
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
        cin >> matkul;

        switch (matkul)
        {
        case 1:
            cout << "1. PENDIDIKAN PANCASILA" << endl;
            cout << "INPUT NILAI KEAKTIFAN (maks 16) = " << endl;
            cin >> NilaiKeaktifanPP;
            cout << "INPUT NILAI TUGAS (maks 100)  = " << endl;
            cin >> tugaspp;
            cout << "INPUT NILAI KUIS (maks 100) = " << endl;
            cin >> kuispp;
            cout << "INPUT NILAI UTS (maks 100) = " << endl;
            cin >> utspp;
            cout << "INPUT NILAI UAS (maks 100) = " << endl;
            cin >> uaspp;

            NApp = ((0.10 * NilaiKeaktifanPP) + (0.35 * tugaspp) + (0.15 * kuispp) + (0.20 * utspp) + (0.20 * uaspp));
            cout << "NILAI AKHIR MATA KULIAH PENDIDIKAN PANCASILA = " << NApp << endl;
            break;

        case 2:
            cout << "2. ALGORITMA DAN PEMROGRAMAN" << endl;
            cout << "INPUT NILAI KEAKTIFAN (maks 16) = " << endl;
            cin >> NilaiKeaktifanAlpro;
            cout << "INPUT NILAI TUGAS (maks 100)  = " << endl;
            cin >> tugasalpro;
            cout << "INPUT NILAI KUIS (maks 100) = " << endl;
            cin >> kuisalpro;
            cout << "INPUT NILAI UTS (maks 100) = " << endl;
            cin >> utsalpro;
            cout << "INPUT NILAI UAS (maks 100) = " << endl;
            cin >> uasalpro;

            NAalpro = ((0.10 * (NilaiKeaktifanAlpro)) + (0.35 * (tugasalpro)) + (0.15 * (kuisalpro)) + (0.20 * (utsalpro)) + (0.20 * (uasalpro)));
            cout << "NILAI AKHIR MATA KULIAH ALGORITMA DAN PEMROGRAMAN = " << NAalpro << endl;
            break;

        case 3:
            cout << "3. INDUSTRI PERTANIAN" << endl;
            cout << "INPUT NILAI KEAKTIFAN (maks 16) = " << endl;
            cin >> NilaiKeaktifanIP;
            cout << "INPUT NILAI TUGAS (maks 100)  = " << endl;
            cin >> tugasip;
            cout << "INPUT NILAI KUIS (maks 100) = " << endl;
            cin >> kuisip;
            cout << "INPUT NILAI UTS (maks 100) = " << endl;
            cin >> utsip;
            cout << "INPUT NILAI UAS (maks 100) = " << endl;
            cin >> uasip;

            NAip = ((0.10 * (NilaiKeaktifanIP)) + (0.35 * (tugasip)) + (0.15 * (kuisip)) + (0.20 * (utsip)) + (0.20 * (uasip)));
            cout << "NILAI AKHIR MATA KULIAH INDUSTRI PERTANIAN = " << NAip << endl;
            break;

        case 4:
            cout << "4. PENGETAHUAN LINGKUNGAN" << endl;
            cout << "INPUT NILAI KEAKTIFAN (maks 16) = " << endl;
            cin >> NilaikeaktifanPengling;
            cout << "INPUT NILAI TUGAS (maks 100)  = " << endl;
            cin >> tugaspengling;
            cout << "INPUT NILAI KUIS (maks 100) = " << endl;
            cin >> kuispengling;
            cout << "INPUT NILAI UTS (maks 100) = " << endl;
            cin >> utspengling;
            cout << "INPUT NILAI UAS (maks 100) = " << endl;
            cin >> uaspengling;

            NApengling = ((0.10 * (NilaikeaktifanPengling)) + (0.35 * (tugaspengling)) + (0.15 * (kuispengling)) + (0.20 * (utspengling)) + (0.20 * (uaspengling)));
            cout << "NILAI AKHIR MATA KULIAH PENGETAHUAN LINGKUNGAN = " << NApengling << endl;
            break;

        case 5:
            cout << "5. PENGANTAR TEKNOLOGI INFORMASI" << endl;
            cout << "INPUT NILAI KEAKTIFAN (maks 16) = " << endl;
            cin >> NilaiKeaktifanPTI;
            cout << "INPUT NILAI TUGAS (maks 100)  = " << endl;
            cin >> tugaspti;
            cout << "INPUT NILAI KUIS (maks 100) = " << endl;
            cin >> kuispti;
            cout << "INPUT NILAI UTS (maks 100) = " << endl;
            cin >> utspti;
            cout << "INPUT NILAI UAS (maks 100) = " << endl;
            cin >> uaspti;

            NApti = ((0.10 * (NilaiKeaktifanPTI)) + (0.35 * (tugaspti)) + (0.15 * (kuispti)) + (0.20 * (utspti)) + (0.20 * (uaspti)));
            cout << "NILAI AKHIR MATA KULIAH PENGANTAR TEKNOLOGI INFORMASI = " << NApti << endl;
            break;

        case 6:
            cout << "6. PENDIDIKAN ETIKA DAN KEARIFAN LOKAL" << endl;
            cout << "INPUT NILAI KEAKTIFAN (maks 16) = " << endl;
            cin >> NilaiKeaktifanEKL;
            cout << "INPUT NILAI TUGAS (maks 100)  = " << endl;
            cin >> tugasekl;
            cout << "INPUT NILAI KUIS (maks 100) = " << endl;
            cin >> kuisekl;
            cout << "INPUT NILAI UTS (maks 100) = " << endl;
            cin >> utsekl;
            cout << "INPUT NILAI UAS (maks 100) = " << endl;
            cin >> uasekl;

            NAekl = ((0.10 * (NilaiKeaktifanEKL)) + (0.35 * (tugasekl)) + (0.15 * (kuisekl)) + (0.20 * (utsekl)) + (0.20 * (uasekl)));
            cout << "NILAI AKHIR MATA KULIAH ETIKA DAN KEARIFAN LOKAL = " << NAekl << endl;
            break;

        case 7:
            cout << "7. KALKULUS" << endl;
            cout << "INPUT NILAI KEAKTIFAN (maks 16) = " << endl;
            cin >> NilaiKeaktifanKLK;
            cout << "INPUT NILAI TUGAS (maks 100)  = " << endl;
            cin >> tugasklk;
            cout << "INPUT NILAI KUIS (maks 100) = " << endl;
            cin >> kuisklk;
            cout << "INPUT NILAI UTS (maks 100) = " << endl;
            cin >> utsklk;
            cout << "INPUT NILAI UAS (maks 100) = " << endl;
            cin >> uasklk;

            NAklk = ((0.10 * (NilaiKeaktifanKLK)) + (0.35 * (tugasklk)) + (0.15 * (kuisklk)) + (0.20 * (utsklk)) + (0.20 * (uasklk)));
            break;

        case 8:
            cout << "8. TEKNIK DIGITAL" << endl;
            cout << "INPUT NILAI KEAKTIFAN (maks 16) = " << endl;
            cin >> NilaiKeaktifanTD;
            cout << "INPUT NILAI TUGAS (maks 100)  = " << endl;
            cin >> tugastd;
            cout << "INPUT NILAI KUIS (maks 100) = " << endl;
            cin >> kuistd;
            cout << "INPUT NILAI UTS (maks 100) = " << endl;
            cin >> utstd;
            cout << "INPUT NILAI UAS (maks 100) = " << endl;
            cin >> uastd;

            NAtd = ((0.10 * (NilaiKeaktifanTD)) + (0.35 * (tugastd)) + (0.15 * (kuistd)) + (0.20 * (utstd)) + (0.20 * (uastd)));
            cout << "NILAI AKHIR MATA KULIAH TEKNIK DIGITAL = " << NAtd << endl;
            break;

        case 9:
            cout << "9. PENDIDIKAN BAHASA INDONESIA" << endl;
            cout << "INPUT NILAI KEAKTIFAN (maks 16) = " << endl;
            cin >> NilaiKeaktifanPBI;
            cout << "INPUT NILAI TUGAS (maks 100)  = " << endl;
            cin >> tugaspbi;
            cout << "INPUT NILAI KUIS (maks 100) = " << endl;
            cin >> kuispbi;
            cout << "INPUT NILAI UTS (maks 100) = " << endl;
            cin >> utspbi;
            cout << "INPUT NILAI UAS (maks 100) = " << endl;
            cin >> uaspbi;

            NApbi = ((0.10 * (NilaiKeaktifanPBI)) + (0.35 * (tugaspbi)) + (0.15 * (kuispbi)) + (0.20 * (utspbi)) + (0.20 * (uaspbi)));
            cout << "NILAI AKHIR MATA KULIAH PENDIDIKAN BAHASA INDONESIA = " << NApbi << endl;
            break;
        default:
            cout << "Mohon maaf anda keluar dari program" << endl;
        }
    } while (matkul >= 1 && matkul <= 9);
}