#include <iostream>

using namespace std;
void fungsi (int x) {
    for(int i = 0; i < x; i++)
      cout << "*";
}

int main () {
    int y;
    cout << "Inputkan Berapa Bintang = ";
    cin >> y;
    
    fungsi(y);

return 0;
}