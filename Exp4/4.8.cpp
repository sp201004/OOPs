#include <iostream>
using namespace std;

class Rectangle {
    private:
        int width;
        int height;

    public:
        Rectangle(int w, int h) {
            width = w;
            height = h;
        }

        void displayArea() {
            cout << "Area of the rectangle is: " << width * height << endl;
        }
};

int main() {
    Rectangle rect(10, 5);

    rect.displayArea();

    return 0;
}