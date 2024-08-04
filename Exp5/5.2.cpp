#include <iostream>

using namespace std;

class DecimalToBinary {
private:
    int decimal;
    string binary;

public:
    DecimalToBinary() {
        decimal = 0;
        binary = "";
    }

    DecimalToBinary(int dec) {
        decimal = dec;
        convertToBinary();
    }

    void convertToBinary() {
        int temp = decimal;
        while (temp > 0) {
            binary = to_string(temp % 2) + binary;
            temp /= 2;
        }
    }

    void displayBinary() {
        cout << "Binary representation of " << decimal << " is: " << binary << endl;
    }
};

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    DecimalToBinary obj(decimalNumber);
    obj.displayBinary();

    return 0;
}