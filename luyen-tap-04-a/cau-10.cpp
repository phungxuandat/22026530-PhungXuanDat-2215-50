#include <bits/stdc++.h>

using namespace std;

void phantich(int n) {
    vector<int> thuaso;  
    vector<int> mu; 

    for (int i = 2; i <= sqrt(n); i++) {
        int count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0) {
            thuaso.push_back(i);
            mu.push_back(count);
        }
    }
    if (n != 1) {
        thuaso.push_back(n);
        mu.push_back(1);
    }

    for (size_t i = 0; i < thuaso.size(); i++) {
        cout << thuaso[i] << " " << mu[i] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    phantich(n);
    return 0;
}