#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n; 
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    bool check = false;
    for (int i = 0; i <= m - n; i++) {
        bool tmp = true;
        for (int j = 0; j < n; j++) { 
            if (b[i + j] != a[j]) {
                tmp = false;
                break;
            }
        }
        if (tmp) {
            check = true;
            break;
        }
    }

    if (check) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
