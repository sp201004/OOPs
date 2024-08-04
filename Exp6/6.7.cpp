#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() {
        feet = 0;
        inches = 0;
    }

    Distance(int ft, int in) {
        feet = ft;
        inches = in;
    }

    Distance operator+(const Distance& d) {
        Distance result;
        result.feet = feet + d.feet;
        result.inches = inches + d.inches;
        if (result.inches >= 12) {
            result.feet += result.inches / 12;
            result.inches %= 12;
        }
        return result;
    }

    void display() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }
};

int main() {
    Distance d1(5, 10);
    Distance d2(3, 8);
    Distance sum = d1 + d2;

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    cout << "Sum: ";
    sum.display();

    return 0;
}