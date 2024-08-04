#include <iostream>
#include <string>

using namespace std;

template <typename T> T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int intResult = ::max(10, 20);
    cout << "Max of 10 and 20: " << intResult << endl;

    float floatResult = ::max(3.14f, 2.71f);
    cout << "Max of 3.14 and 2.71: " << floatResult << endl;

    string stringResult = ::max("hello", "world");
    cout << "Max of 'hello' and 'world': " << stringResult << endl;

    return 0;
}
