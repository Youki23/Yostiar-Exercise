#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Baris Pertama    
    cout << fixed << setw(20) << left << "Nama";
    cout << fixed << setw(8) << left << "Tier";  // Mengatur lebar kolom kelas menjadi 5
    cout << fixed << setw(20) << left << "Anime" << endl;

    // Baris Kedua
    cout << fixed << setw(20) << left << "Maki Zenin";
    cout << fixed << setw(8) << left << "SSS+";
    cout << fixed << setw(20) << left << "Jujutsu Kaisen" << endl;

    // Baris Ketiga
    cout << fixed << setw(20) << left << "Aigis";
    cout << fixed << setw(8) << left << "SS+";
    cout << fixed << setw(20) << left << "Persona 3" << endl;

    // Baris Keempat
    cout << fixed << setw(20) << left << "Rei Ayanami";
    cout << fixed << setw(8) << left << "S+";
    cout << fixed << setw(20) << left << "Evangelion" << endl;

    // Baris Kelima
    cout << fixed << setw(20) << left << "Rem";
    cout << fixed << setw(8) << left << "S";
    cout << fixed << setw(20) << left << "Re:Zero" << endl;

    return 0;
}
