#include <bits/stdc++.h>
#include <vector>
using namespace std;

#include <stdio.h>

bool check(int n) {
    if( n <2) {
        return false;
    }
    for( int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
 int n; cin >> n;
 if(check(n)) {
     cout << "yes";
 }
 else cout << "no";
}