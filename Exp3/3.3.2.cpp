#include <iostream>

using namespace std;

void printMessage(const string& message = "Hello, Engineers") {
    cout << message << endl;
}

// Function overloading
void printMessage(int num) {
    cout << "Number: " << num << endl;
}

void printMessage(double num) {
    cout << "Number: " << num << endl;
}

int main() {
    printMessage();
    printMessage("Hola");

    printMessage(10);
    printMessage(3.14);

    return 0;
}
