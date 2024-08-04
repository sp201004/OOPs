#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) {
        value = val;
    }

    void display() {
        cout << "Value is: " << value << endl;
    }
};

int main() {
    int value;
    cout << "Enter a number: ";
    cin >> value;
    MyClass obj(value);
    
    obj.display();

    return 0;
}