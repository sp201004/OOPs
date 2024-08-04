#include <iostream>

using namespace std;

class Person {
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayDetails() {
        cout << "Name of Person: " << name << endl;
        cout << "Age of Person: " << age << endl;
    }
};

int main() {
    Person person("Mac-user", 30);
    person.displayDetails();

    return 0;
}