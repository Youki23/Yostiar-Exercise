#include <iostream>
using namespace std;

int main()
{
   int pilihan;

   cout << "Masukkan pilihan kamu \n";
   cout << "1. Cuaca Cerah\n";
   cout << "2. Mendung\n";
   cout << "3. Hujan\n";

   cout << "Pilihan = ";
   cin >> pilihan;

   if (pilihan == 1)
   {
      cout << "Cuaca cerah nih ! bisa nih jalan-jalan !";
   }
   else if (pilihan == 2)
   {
      cout << "Wah, mendung ! Ada baiknya kamu bawa payung kalau mau";
   }
   else if (pilihan == 3)
   {
      cout << " Pakai payunhgnya! Kalau makin lebat ";
   }
   else
   {
      cout << "Pilihan tidak Valid, Coba Variabel Yang sudah ditentukan";
   }
}
