#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor" << endl;
    }
};

int main() {
    MyClass obj;

    return 0;
}