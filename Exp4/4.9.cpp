#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass() {
        data = 0;
    }

    MyClass(int value) {
        data = value;
    }
    MyClass(const MyClass& other) {
        data = other.data;
    }

    
    int getData() {
        return data;
    }
};

int main() {
    MyClass obj1(10);

    MyClass obj2(obj1);

    cout << "Print the data of both objects : " << endl;

    cout << "obj1 data: " << obj1.getData() << endl;
    cout << "obj2 data: " << obj2.getData() << endl;

    return 0;
}
