#include <bits/stdc++.h>
using namespace std;

int bcnn(int a, int b) {
    if (a == 0 || b == 0) {
        return 0; 
    }

    int maxVal = max(a, b);
    for (int i = maxVal; ; i++) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << bcnn(a, b);

    return 0;
}