#include <iostream>

using namespace std;

double cubeVolume(double sideLength) {
    return sideLength * sideLength * sideLength;
}

double cylinderVolume(double radius, double height) {
    return 3.14159 * radius * radius * height;
}

double sphereVolume(double radius) {
    return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
}

int main() {
    double sideLength, radius, height;

    cout << "Enter the side of the cube: ";
    cin >> sideLength;
    cout << "Volume of the cube: " << cubeVolume(sideLength) << endl;
    cout << endl;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "Volume of the cylinder: " << cylinderVolume(radius, height) << endl;
    cout << endl;
    
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    cout << "Volume of the sphere: " << sphereVolume(radius) << endl;

    return 0;
}