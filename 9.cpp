#include <iostream>
#include <windows.h>
using namespace std;
int sum(100000000), minnum, maxnum, maxsum{-1000000000};
void f(int k, int c) {
    if (k < sum) {
        minnum = c;
        sum = k;
    }
}
void j(int k, int c) {
    if (k > maxsum) {
        maxnum = c;
        maxsum = k;
    }
}
int flex(int q[], int size_t, int r) {
    int cntr = 0;
    for (int i = 1; i <= size_t; i++) {
        if (q[i] > r){
            cntr += 1;
        }
    }
    return cntr;
}
int summa(int e[], int dlina) {
    int s = 0;
    for (int p = 1; p <= dlina; p++) {
        s += e[p];
    }
    return s;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int cnt, zad;
    cout << "Введите длину массива" << endl;
    cin >> cnt;
    cout << "Введите заданное число" << endl;
    cin >> zad;
    int m[cnt+1];
        for (int b = 1; b <= cnt; b++) {
            int a;
            cout << "Введите число" << endl;
            cin >> a;
            m[b] = a;
        }
    for (int i = 1; i <= cnt; i++) {
        f(m[i], i);
        j(m[i], i);
    }
    cout << "Минимальное число под номером " << minnum << endl;
    cout << "Максимальное число под номером " << maxnum << endl;
    cout << "Количество чисел больше заданного " << flex(m, cnt, zad) << endl;
    cout << "Сумма элементов равна " << summa(m, cnt) << endl;
    return 0;
}

