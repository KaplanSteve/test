#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    double x;
    double y;
public:
    Point(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    Point(const Point& other) {
        x = other.x;
        y = other.y;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }
};

class Circle {
private:
    Point center;
    double radius;
    double area;
    double circumference;

public:
    Circle(const Point& centerPoint, double circleRadius) : center(centerPoint) {
        radius = circleRadius;
        area = M_PI * pow(radius, 2);
        circumference = 2 * M_PI * radius;
    }

    Circle(const Circle& other) : center(other.center) {
        radius = other.radius;
        area = other.area;
        circumference = other.circumference;
    }

    void showpara() const {
        cout << "Center: (" << center.getX() << ", " << center.getY() << ")" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area << endl;
        cout << "Circumference: " << circumference << endl;
    }
};

int main() {
    Point centerPoint(3.0, 4.0);
    double circleRadius = 5.0;

    Circle myCircle(centerPoint, circleRadius);
    myCircle.showpara();

    return 0;
}