#include <bits/stdc++.h>
using namespace std;

int n, m, a[100], check;

void sinhNhiPhan() {
    int i = n + m;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        --i;
    }
    if (i == 0) {
        check = 0;
    } else {
        a[i] = 1;
    }
}

bool checkdem() {
    int cntN = 0, cntM = 0;
    for (int i = 1; i <= n + m; ++i) {
        if (a[i] == 0) cntN++;
        else cntM++ ;
    }
    if (cntN == n && cntM == m) {
        return true;
    }
    return false;
}

int main() {
    cin >> n >> m;
    check = 1;
    for (int i = 1; i <= n + m; ++i) {
        a[i] = 0;
    }

    while (check) {
        if (checkdem()) {
            for (int i = 1; i <= n + m; ++i) {
                cout << a[i];
            }
            cout << endl;
        }
        sinhNhiPhan();
    }
    return 0;
}
