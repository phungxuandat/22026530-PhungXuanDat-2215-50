struct Rectangle {
    // your code goes here
    // Cac bien thanh vien
    // your code goes here
    // Hai ham khoi tao
    int height, length;

    Rectangle() : height(0), length(0) {}
    Rectangle(int x, int y) : height(x), length(y) {}

    int getPerimeter() {
        // your code goes here
        return 2 * (height + length);
    }

    void print() {
        // your code goes here
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < length; j++) {
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
    // your code goes here
    int perimeterA = a.getPerimeter();
    int perimeterB = b.getPerimeter();
    if (perimeterA < perimeterB) {
        return -1;
    } else if (perimeterA == perimeterB) {
        return 0;
    } else {
        return 1;
    }
}