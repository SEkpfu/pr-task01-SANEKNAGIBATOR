#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int cnt;
    cout << "Введите число сотрудников";
    cin >> cnt;
    int m[cnt+1];
    long double summa, maxzp{0}, minzp{10000000}, cntrab{0}, onalog = 0;
    int numrab[cnt], minnum, maxnum;
    for (int i = 1; i <= cnt; i++) {
        double zp, nalog, prem, total;
        cout << "Введите данные об работнике" << endl;
        cin >> zp;
        cin >> prem;
        nalog = 0;
        total = 0;
        nalog = (zp+prem) * 0.13;
        total = (zp+prem) - nalog;
        if (total < minzp) {
            minzp = total;
            minnum = i;
        }
        if (total > maxzp) {
            maxzp = total;
            maxnum = i;
        }
        if (total > 50000) {
            cntrab += 1;
            numrab[i-1] = i;
        }
        else if(total <= 50000) {
            numrab[i-1] = 0;
        }
        onalog += nalog;
    }
    cout << "Номер сотрудника с минимальной оплатой - " << minnum << endl;
    cout << "Максимальная зарплата = " << maxzp << "; Номер соответсвенного работника с максимальной зарплатой - " << maxnum << endl;
    cout << "Количество сотрудников с зарплатой больше 50000 рублей - " << cntrab << endl;
    for (int k = 0; k < cnt; k++) {
        if (numrab[k] != 0) {
            cout << "Сотрудник под номером " << k+1 << " который получил больше 50000" << endl;
        }
    }
    cout << "Общий налог всех сотрудников - " << onalog << endl;
    return 0;
}