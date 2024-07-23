#include <iostream>
#include <cmath>

using namespace std;

const int maxn = 1e7 + 1;
int t[maxn];

void sang() {
    t[0] = t[1] = 1;
    for (int i = 2; i <= sqrt(maxn); i++) {
        if (t[i] == 0) {
            for (int j = i * i; j <= maxn; j += i) {
                t[j] = 1;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sang();

    for (int i = 0; i < n; i++) {
        if ( t[a[i]] == 0) {
            cout << a[i] << " ";
        }
    }
    return 0;
}
