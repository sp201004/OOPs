#include <iostream>
using namespace std;

class DecimalToBinary {
private:
    long long binary;

public:
    DecimalToBinary(long long decimal) {
        convertToBinary(decimal);
    }

    void convertToBinary(long long decimal) {
        binary = 0;
        long long base = 1;

        while (decimal > 0) {
            binary += (decimal % 2) * base;
            decimal /= 2;
            base *= 10;
        }
    }

    void displayBinary() {
        cout << "Binary: " << binary << endl;
    }
};

int main() {
    long long decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    DecimalToBinary obj(decimal);
    obj.displayBinary();

    return 0;
}
