struct Rectangle {
    int height;
    int length;
    Rectangle() : height(0), length(0) {}
    Rectangle(int a, int b) : height(a), length(b) {}

    int getPerimeter() {
        return (height+ length) * 2;
    }
    
    void print() {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < length; ++j) {
                if (i == 0 || i == height - 1 || j == 0 || j == length - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
};

int compare(Rectangle a, Rectangle b) {
    int kiemtraA = a.getPerimeter();
    int kiemtraB = b.getPerimeter();
    if ( kiemtraA < kiemtraB) {
        return -1;
    }
    else if( kiemtraA == kiemtraB) {
        return 0;
    }
    else return 1;
}
