#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double delta = b * b - 4 * a * c;
    cout << fixed << setprecision(2);
    double x, y;
    
    if (delta == 0) {
        x = -b / (2 * a);
        cout << x << endl;
    }
    else if (delta > 0) {
        x = (-b + sqrt(delta)) / (2 * a);
        y = (-b - sqrt(delta)) / (2 * a);
        if (x == y) {
            cout << x << endl;
        }
        else if (x < y) {
            cout << x << endl;
            cout << y << endl;
        }
        else {
            cout << y << endl;
            cout << x << endl;
        }
    }
    else {
        double x1 = -b / (2 * a);
        double y1 = sqrt(-delta) / (2 * a);
        cout << x1 << " " << -y1 << endl;
        cout << x1 << " " << y1 << endl;
    }

    return 0;
}