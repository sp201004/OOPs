#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double calculate_area() const = 0;
};

class Drawable {
public:
    virtual void draw() const = 0;
};

class Circle : public Shape, public Drawable {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculate_area() const override {
        return M_PI * radius * radius;
    }

    void draw() const override {
        cout << "Drawing Circle with radius " << radius << endl;
    }
};

class Rectangle : public Shape, public Drawable {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculate_area() const override {
        return length * width;
    }

    void draw() const override {
        cout << "Drawing Rectangle with length " << length << " and width " << width << endl;
    }
};

class Triangle : public Shape, public Drawable {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculate_area() const override {
        return 0.5 * base * height;
    }

    void draw() const override {
        cout << "Drawing Triangle with base " << base << " and height " << height << endl;
    }
};

class GraphicsLibrary {
public:
    void render(const Drawable& shape) const {
        shape.draw();
        cout << "Area: " << dynamic_cast<const Shape&>(shape).calculate_area() << endl << endl;
    }
};
int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4);

    GraphicsLibrary graphics;
    graphics.render((circle));
    graphics.render((rectangle));
    graphics.render((triangle));

    return 0;
}