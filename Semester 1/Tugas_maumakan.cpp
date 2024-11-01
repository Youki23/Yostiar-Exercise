#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;
int main () {
float totalnilai = 3.12131;
 stringstream fixtotalnilai;
        fixtotalnilai <<fixed<< setprecision(2) <<totalnilai;

        cout << fixtotalnilai.str();
return 0;
}