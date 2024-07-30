class Student  {
    int d[5];
    public:
    int sum = 0;
    Student() {}
    void input () {
        for( int i = 0; i < 5; i++) {
            cin  >> d[i];
        }
    }
    int calculateTotalScore()  {
        for( int i = 0; i < 5; i++) {
            sum += d[i];
        }
        return sum;
    }


};