#include <iostream>
#include <string>

using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    string add(const string& a, const string& b) {
        return a + b;
    }
};

int main() {
    Math math;

    int intResult = math.add(5, 10);
    cout << "Addition of two integers: " << intResult << endl;

    double doubleResult = math.add(3.14, 2.71);
    cout << "Addition of two doubles: " << doubleResult << endl;

    string stringResult = math.add("Hello, ", "world!");
    cout << "Concatenation of two strings: " << stringResult << endl;

    return 0;
}