#include <bits/stdc++.h>
#include <vector>
using namespace std;

#include <stdio.h>



int main()
{
    int n; cin >> n;
    double maxx = -9999999, minn = 1e9;
    while( n--) {
        double x; cin >> x;
        maxx = max(maxx,x);
        minn = min(minn,x);
    }
    cout << maxx << endl;
    cout << minn;
 
}