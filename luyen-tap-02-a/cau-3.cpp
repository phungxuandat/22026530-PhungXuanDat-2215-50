#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int a,b; cin >> a  >> b;
    int rutgon = (gcd( a, b));
    a = a/rutgon;
    b = b/rutgon;
    if(b== 1) {
        cout << a;
    }
    else cout << a << "/" << b;
    

    return 0;
}