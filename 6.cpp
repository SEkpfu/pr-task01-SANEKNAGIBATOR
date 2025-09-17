#include <iostream>
using namespace std;
int main() {
        double zp1, hours1, prem1;
        double zp2, hours2, prem2;
        double total1, nalog1, end1;
        double total2, nalog2, end2;
        string family1, family2;
        cin >> zp1 >> hours1 >> prem1;
        cin >> zp2 >> hours2 >> prem2;
        cin >> family1 >> family;
        total1=zp1*hours1 + ((zp1 * hours1 ) * (prem1 * 100%)) << endl;
        nalog1=total1*0.13;
        total2=zp2*hours2 + ((zp2 * hours2 ) * (prem2 * 100%)) << endl;
        nalog2=total2*0.13;
        end1=total1 - nalog1;
        end2=total2 - nalog2;
        if(end1 < 1000) {
            cout << family1 << endl;
        }
        if(end2 < 1000) {
            cout << family2 << endl;
        }
        if(nalog1 > 50) {
            cout << family1[0] << "-" << family1[-1] << endl;
        }
        if(nalog2 > 50) {
            cout << family2[0] << "-" << family2[-1] << endl;
        }
}