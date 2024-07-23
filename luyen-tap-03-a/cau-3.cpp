#include <bits/stdc++.h>

using namespace std;
int n, a[100], check;
void sinhNhiPhan() {
    int i = n;
    while( i >= 1 && a[i] == 1 ) {
        a[i] = 0;
        --i;
    }
    if( i == 0) {
        check =0;
    }
    else a[i] =1;
}
int main() {
    cin >> n;
    check = 1;
    for( int i = 1; i <= n; i++) {
        a[i] = 0;
    }
    while( check) {
        for( int i = 1; i <= n; i++) {
            cout << a[i];
        }
        cout << endl;
        sinhNhiPhan();
    }
    return 0;
    
}
