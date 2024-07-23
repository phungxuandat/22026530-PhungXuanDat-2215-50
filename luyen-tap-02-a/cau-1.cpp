#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for( int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x[100 ] = {0};
    for( int i = 0; i < n; i++) {
        x[a[i]] += 1;
    }
    int maxx  = 0;
    for( int i = 0; i < 99; i++) {
        maxx  = max(maxx, x[i] + x[i + 1]);
    }
    cout << maxx;

    return 0;
}