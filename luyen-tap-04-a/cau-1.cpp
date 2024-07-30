
Point::Point() : x(0), y(0) {}

Point::Point(double a, double b) : x(a), y(b) {}

Point::Point(const Point& tmp) : x(tmp.x), y(tmp.y) {}


Triangle::Triangle(const Point& point1, const Point& point2, const Point& point3)
    : p1(point1), p2(point2), p3(point3) {}

double Triangle::getPerimeter() const 
{
    double canh1 = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    double canh2 = sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
    double canh3 = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2));
    return canh1 + canh2 + canh3;
}

double Triangle::getArea() const 
{
    double canh1 = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    double canh2 = sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
    double canh3 = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2));
    double s = (canh1 + canh2 + canh3) / 2;
    return sqrt(s * (s - canh1) * (s - canh2) * (s - canh3));
}