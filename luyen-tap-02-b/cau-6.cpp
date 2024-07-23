#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    int n = str.length();

    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (i + j == n - 1) { 
                if (str[i] != str[j]) {
                    cout << "No";
                    return 0;
                }
            }
        }
    }
    cout << "Yes";
    return 0;
}