#include <bits/stdc++.h>
using namespace std;

bool uoc(int a, int b) {
    if (b == 0) return false; 
    if (a % b == 0) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        int original = a[i]; 
        while (a[i] > 0) {
            int x = a[i] % 10; 
            if (uoc(original, x)) {
                tmp++;
            }
            a[i] /= 10; 
        }
        cout << tmp << endl; 
    }

    return 0;
}