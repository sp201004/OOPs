#include <iostream>

using namespace std;

void zero_small(int &num1, int &num2) {
    if (num1 < num2)
        num1 = 0;
    else
        num2 = 0;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1 ;

    cout << "Enter Second number: ";
    cin >> num2;

    cout << "Before calling zero_small(): num1 = " << num1 << ", num2 = " << num2 << endl;

    zero_small(num1, num2);
    cout << "After calling zero_small(): num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
