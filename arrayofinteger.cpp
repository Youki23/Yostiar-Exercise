#include <iostream>

using namespace std;
int main()
{
    int Yostiar[100];
    int YostiarTemp;
    int i;

    cout << "(Kumpulan Array, ketik -999 untuk abort)" << endl;

    do
    {
        cin >> YostiarTemp;
        if (YostiarTemp != -999)
        {
            Yostiar[i] = YostiarTemp;
        }
        i++;

    } while (YostiarTemp != -999);

    cout << "Kumpulan Array ada " << i << " data";

    return 0;
}