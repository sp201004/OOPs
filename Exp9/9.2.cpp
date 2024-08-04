#include <iostream>
#include <complex>

using namespace std;

template<typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }

    T subtract(T a, T b) {
        return a - b;
    }

    T multiply(T a, T b) {
        return a * b;
    }

    T divide(T a, T b) {
        return a / b;
    }
};

int main() {
    Calculator<int> intCalculator;
    Calculator<float> floatCalculator;
    Calculator<complex<double> > complexCalculator;

    int a = 5, b = 3;
    float c = 2.5, d = 1.5;
    complex<double> e(2.0, 1.0), f(1.0, 2.0);

    cout << "Integer addition: " << intCalculator.add(a, b) << endl;
    cout << "Float subtraction: " << floatCalculator.subtract(c, d) << endl;
    cout << "Complex multiplication: " << complexCalculator.multiply(e, f) << endl;

    return 0;
}