#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Addition (int): " << add(5, 3) << endl;
    cout << "Addition "<< add(5, 3, 2) << endl;

    return 0;
}
