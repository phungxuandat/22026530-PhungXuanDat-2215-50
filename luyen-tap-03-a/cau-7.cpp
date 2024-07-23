struct Time {
    // your code goes here
    // Cac bien thanh vien
    // your code goes here
    // Hai ham khoi tao
    int h;
    int m;
    int s;
    Time() : h(0),m(0),s(0) {}
    Time ( int H, int M, int S) : h(H), m(M), s(S) {}
    int second() {
        return (h * 3600) + (m * 60) + (s); 
    }
    
    void print() {
        if( h < 10) {
            cout << "0" << h << ":";
        }
        else cout << h << ":";
        if( m < 10) {
            cout << "0" << m << ":";
        }
        else cout << m << ":";
        if( s < 10) {
            cout << "0" << s << endl;
        }
        else cout << s << endl;
    }
};

Time normalize(int h, int m, int s) {
    m += s / 60;
    s = s % 60;
    h += m / 60;
    m = m % 60;
    return Time( h , m , s);
}