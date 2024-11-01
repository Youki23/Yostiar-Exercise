#include <iostream>
using namespace std;
    int main () {
    int bil;
    int hasil;
    
    
    cout << " Masukan Bilangan sembarang ! \n";

    cout << "bil = ";

    cin >> bil;

    cout << endl;

    hasil = bil % 2;

    if ( hasil == 0) {
        cout << " Kamu Memasukan BIlangan Genap";
        return 0;

    } else { 
        cout <<" Kamu Memasukan Bilangan ganjil";
        return 0;

    }

 

}