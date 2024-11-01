#include <iostream>

using namespace std;
int main()
{
    char Elvira[10];
    int jumlah = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> Elvira[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (Elvira[i] == 'A' || Elvira[i] == 'a')
        {
            jumlah++;
        }
    }

    cout << "Karakter A ada " << jumlah;

    return 0;
}