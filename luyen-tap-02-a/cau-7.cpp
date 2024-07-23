#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int min_a = 999999;
    int min_b = 999999;
    
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        min_a = min(min_a, a);
        min_b = min(min_b, b);
    }
    
    cout << min_a * min_b << endl;
    
    return 0;
}
