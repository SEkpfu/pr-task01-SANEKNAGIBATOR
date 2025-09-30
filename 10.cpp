#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int mtotal[13][4];
    int mnalog[13][4];
    double nalog3{0}, max3{0}, maxnum, totalsumma{0};
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 4; j++) {
            int zp, hours;
            cout << "Введите данные о " << j << " работнике в " << i << " месяце"<< endl;
            cin >> zp >> hours;
            double nalog = zp*hours*0.13;
            double total = zp*hours-nalog;
            mtotal[i][j] = total;
            mnalog[i][j] = nalog;
            if (3 == j) {
                nalog3 += nalog;
            }
            if (3 == i && total > max3) {
                    max3 = total;
                    maxnum = j;
            }
            totalsumma += total;
        }
    }
    cout << "Во втором месяце первый работник получил " << mtotal[2][1] << endl;
    cout << "За весь год у 3-его работника было удержано " << nalog3 << " денег"<< endl;
    cout << "Больше всех в третьем месяце заработал работник под номером " << maxnum << endl;
    cout << "Вся бригада заработала " << totalsumma << endl;
}