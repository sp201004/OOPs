#include <iostream>
using namespace std;

class MyClass {
public:
    int num;

    MyClass() {
        num = 0;
    }
};

int main() {
    MyClass obj;
    
    cout << "Value of num: " << obj.num << endl;

    return 0;
}
