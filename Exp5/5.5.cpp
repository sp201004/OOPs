#include <iostream>

using namespace std;

class DiamondPattern {
public:
    DiamondPattern(int size) : size(size) {
        drawPattern();
    }

    ~DiamondPattern() {
        drawPattern();
    }

private:
    int size;

    void drawPattern() {
        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= size - i; j++) {
                cout << " ";
            }

            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }

            cout << endl;
        }

        for (int i = size - 1; i >= 1; i--) {
            for (int j = 1; j <= size - i; j++) {
                cout << " ";
            }

            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }
};

int main() {
    int size;
    cout << "Enter the size of the diamond: ";
    cin >> size;

    DiamondPattern pattern(size);

    return 0;
}