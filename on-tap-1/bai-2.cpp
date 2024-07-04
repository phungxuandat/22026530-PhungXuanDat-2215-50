
#include <iostream>
using namespace std;

int main()
{
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    int d = a1 * b2 - a2 * b1,
        dx = c1 * b2 - c2 * b1,
        dy = a1 * c2 - a2 * c1;
    
    if (d == 0) {
        if (dx == 0 && dy == 0) {
            cout << "Vo so nghiem";
        } else {
            cout << "Vo nghiem";
        }
    } else {
        long long x = (long long)dx / d;
        long long y = (long long)dy / d;
        cout << "x = " << x << ", y = " << y;
    }
    
    return 0;
}