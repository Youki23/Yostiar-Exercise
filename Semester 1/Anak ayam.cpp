#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int ayam;
    cout << "Masukkan Anak ayam =  ";
    cin >> ayam;
    cout << "=======================" << endl;
    do
    {
        cout << "Anak ayam turunlah " << ayam << endl;
            ayam--;
        if (ayam == 1)
        {
            cout << "Mati satu tinggal induknya";
        }
        else
        {
            cout << "Mati satu tinggallah " << ayam << endl;
        }

    } while (i != ayam);
}