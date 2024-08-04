#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    void push(const T& element) {
        elements.push_back(element);
    }

    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        }
    }

    T top() const {
        if (!elements.empty()) {
            return elements.back();
        }
        throw runtime_error("Stack is empty");
    }

    bool empty() const {
        return elements.empty();
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(5);
    intStack.push(30);
    intStack.push(80);

    while (!intStack.empty()) {
        cout << intStack.top() << " ";
        intStack.pop();
    }
    cout << endl;

    Stack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");

    while (!stringStack.empty()) {
        cout << stringStack.top() << " ";
        stringStack.pop();
    }
    cout << endl;

    return 0;
}