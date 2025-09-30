#include <iostream>
using namespace std;
double nalog(double x) {
    cout << x * 0.13 << endl;
}
double end(double x) {
    cout << x - x * 0.13 << endl;
}
int main() {
    double zp, hours, prem;
    double total;
    cin >> zp >> hours >> prem;
    total = zp * hours + ( zp * hours) * prem * 0.01 << endl;
    nalog(total);
    end(total);
}