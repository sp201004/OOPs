#include <iostream>
using namespace std; 

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double getArea() {
        return 3.14159 * radius * radius;
    }

    double getCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle(radius);

    double area = circle.getArea();
    cout << "Area: " << area << endl;
    double circumference = circle.getCircumference();
    cout << "Circumference: " << circumference << endl;

    return 0;
}