struct Complex {
    // your code goes here
    // Cac bien thanh vien
    // your code goes here
    // Hai ham khoi tao
    int a, b;
    Complex(): a(0), b(0) {}
    Complex(int x, int y) : a(x), b(y) {}
    

    double abs() {
        // your code goes here
        return sqrt(( a * a) + (b * b));
    }
    
    void print() {
        // your code goes here
        if(a == 0 && b == 0) {
            cout << 0;
            return;
        }
        if ( a != 0) {
            cout << a;
        }
        if (b != 0) {
            if (b > 0 && a != 0) {
                cout << "+";
            }
            if (b == 1) {
                cout << "i";
            } else if (b == -1) {
                cout << "-i";
            } else {
                cout << b << "i";
            }
        }

        cout << endl;
    }
};

Complex add(Complex a, Complex b) {
    // your code goes here
    int tmp1 = a.a + b.a;
    int tmp2 = a.b + b.b;
    return Complex(tmp1, tmp2);
}