//program hitungkeuntungan
//menghitung keuntungan berdasarkan masukan
#include <iostream>
using namespace std;

int main () {
    //KAMUS
    int paka = 30; // ((paka) panjang kain = dalam meter)
    float leka = 1.25; // ((leka) lebar kain = dalam meter)
    float kpb = 3.5; // ((kpb) kain per baju = dalam meter per segi)
    int hjb = 120000; // ((hjb) harga jual baju)
    int hmk = 2900000; // ((hmk) harga modal kain)
    float pkm = 0.2; // ((pkm) panjang kain masker = dalam meter)
    float lkm = 0.1; // ((lkm) lebar kain masker = dalam meter)s
    int hjm = 10000; // ((hjm) harga jual masker)
    float luka;
    int juba;
    float jkd;
    float sk;
    float luma;
    float juma;
    int ppb;
    int ppm;
    int tp;
    int keuntungan;

    //menghitung luas kain (luka = luas kain)
    cout << "menghitung luas kain" << endl;
    cout << "panjang kain = ";
    cin >> paka;
    cout << "lebar kain = ";
    cin >> leka;

    luka = paka * leka;

    cout << "luas kain = " << luka << endl;

    //menghitung jumlah baju yang dapat dijahit (juba = jumlah baju)
    cout << "menghitung jumlah baju yang dapat dijahit" << endl;
    cout << "luas kain = ";
    cin >> luka;
    cout << "kain per baju = ";
    cin >> kpb;

    juba = luka / kpb;

    cout << "jumlah baju yang dapat dijahit = " << juba << endl;

    //menghitung jumlah kain yang digunakan (jkd = jumlah kain digunakan)
    cout << "menghitung jumlah kain yang digunakan" << endl;
    cout << "jumlah baju yang dapat dijahit = ";
    cin >> juba;
    cout << "kain per baju = ";
    cin >> kpb;

    jkd = juba * kpb;

    cout << "jumlah kain yang digunakan = " << jkd << endl;

    //menghitung sisa kain (sk = sisa kain)
    cout << "menghitung sisa kain yang digunakan" << endl;
    cout << "luas kain = ";
    cin >> luka;
    cout << "jumlah kain yang digunakan = ";
    cin >> jkd;

    sk = luka - jkd;

    cout << "sisa kain = " << sk << endl;

    //menghitung luas masker (luma = luas masker)
    cout << "menghitung luas masker" << endl;
    cout << "panjang kain masker = ";
    cin >> pkm;
    cout << "lebar kain masker = ";
    cin >> lkm;

    luma = pkm * lkm;

    cout << "luas masker = " << luma << endl;

    //menghitung jumlah masker (juma = jumlah masker)
    cout << "jumlah masker" << endl;
    cout << "sisa kain = ";
    cin >> sk;
    cout << "luas masker = ";
    cin >> luma;

    juma = sk / luma;

    cout << "jumlah masker = " << juma << endl;

    //menghitung pendapatan penjualan baju (ppb = pendapatan penjualan baju)
    cout << "menghitung pendapatan baju" << endl;
    cout << "jumlah baju = ";
    cin >> juba;
    cout << "harga jual baju = ";
    cin >> hjb;

    ppb = juba * hjb;

    cout << "pendapatan penjualan baju = " << ppb << endl;

    //menghitung pendapatan penjualan masker (ppm = pendapatan penjualan masker)
    cout << "menghitung pendapatan masker" << endl;
    cout << "jumlah masker = ";
    cin >> juma;
    cout << "harga jual masker = ";
    cin >> hjm;

    ppm = juma * hjm;

    cout << "pendapatan penjualan masker = " << ppm << endl;

    //menghitung total pendapatan (tp = total pendapatan)
    cout << "menghitung total pendapatan" << endl;
    cout << "pendapatan penjualan baju = ";
    cin >> ppb;
    cout << "pendapatan penjualan masker = ";
    cin >> ppm;

    tp = ppb + ppm;

    cout << "total pendapatan = " << tp << endl;

    //menghitung keuntungan (keuntungan = keuntungan)
    cout << "menghitung keuntungan" << endl;
    cout << "total pendapatan = ";
    cin >> tp;
    cout << "harga modal kain = ";
    cin >> hmk;

    keuntungan = tp - hmk;

    cout << "keuntungan = " << keuntungan << endl;


}
