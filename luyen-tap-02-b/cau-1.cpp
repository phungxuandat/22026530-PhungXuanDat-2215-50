#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n; 
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    
    int timeCho = 0;
    int tmp = 0;
    
    for (int i = 0; i < n; i++) {
        timeCho += tmp;
        tmp += a[i];
    }
    
    cout << timeCho;
    return 0;
}
