#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }

    double calculateArea(double side) {
        return side * side;
    }
};

int main() {
    double length, width, side;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    Rectangle rectangle(length, width);
    cout << "Area of the rectangle: " << rectangle.calculateArea() << endl;
    cout << endl;

    cout << "Enter side of the square: ";
    cin >> side;

    Rectangle square(side, side);
    cout << "Area of the square: " << square.calculateArea() << endl;

    return 0;
}