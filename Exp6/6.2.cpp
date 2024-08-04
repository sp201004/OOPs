#include <iostream>

using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double real, double imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    ComplexNumber operator+(const ComplexNumber& other) {
        double sumReal = this->real + other.real;
        double sumImaginary = this->imaginary + other.imaginary;
        return ComplexNumber(sumReal, sumImaginary);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    ComplexNumber num1(2.5, 3.7);
    ComplexNumber num2(1.8, 4.2);

    ComplexNumber sum = num1 + num2;

    cout << "Sum of Complex Number: ";
    sum.display();

    return 0;
}