#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }

    double getArea() {
        return length * width;
    }

    double getPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rectangle;
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    rectangle.setLength(length);

    cout << "Enter the width of the rectangle: ";
    cin >> width;
    rectangle.setWidth(width);

    cout << "Area of the rectangle: " << rectangle.getArea() << endl;
    cout << "Perimeter of the rectangle: " << rectangle.getPerimeter() << endl;

    return 0;
}
