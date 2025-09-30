#include <iostream>
using namespace std;
int main() {
    double zp1, hours1, prem1;
    double zp2, hours2, prem2;
    double total1, nalog1, end1;
    double total2, nalog2, end2;
    cin >> zp1 >> hours1 >> prem1;
    cin >> zp2 >> hours2 >> prem2;
    total1=zp1*hours1 + ((zp1 * hours1 ) * (prem1 * 100%)) << endl;
    total2=zp2*hours2 + ((zp2 * hours2 ) * (prem2 * 100%)) << endl;
    if(total1 > total2) {
        cout << "1" << endl;
    }
    else {
       cout << "2" << endl;
    }
    cout << total1 + total2 << endl;
}