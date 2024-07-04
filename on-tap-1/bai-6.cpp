#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool check = false;
    cin >> n;
    for( int  i = 0; i* i <= n; i++) {
        if( i* i == n) {
            cout << "YES";
            check = true;
            break;
        }
    }
    if(!check) {
        cout << "NO";
    }
    
    return 0;
}