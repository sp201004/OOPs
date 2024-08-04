#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    string address;

public:
    Person(const string& name, int age, const string& address)
        : name(name), age(age), address(address) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string className;

public:
    Student(const string& name, int age, const string& address, int rollNumber, const string& className)
        : Person(name, age, address), rollNumber(rollNumber), className(className) {}

    void display() {
        Person::display();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Class: " << className << endl;
    }
};

class Teacher : public Person {
protected:
    string subject;

public:
    Teacher(const string& name, int age, const string& address, const string& subject)
        : Person(name, age, address), subject(subject) {}

    void display() {
        Person::display();
        cout << "Subject: " << subject << endl;
    }
};

class MathTeacher : public Teacher {
public:
    MathTeacher(const string& name, int age, const string& address)
        : Teacher(name, age, address, "Math") {}

    void teach() {
        cout << "Teaching Math" << endl;
    }
};

class ScienceTeacher : public Teacher {
public:
    ScienceTeacher(const string& name, int age, const string& address)
        : Teacher(name, age, address, "Science") {}

    void teach() {
        cout << "Teaching Science" << endl;
    }
};

int main() {
    cout << "Student Detail:" << endl;
    Student student("Crdroid", 15, "123 Main St", 1, "10th Grade");
    student.display();

    cout << endl;

    cout << "Teacher Detail:" << endl;
    MathTeacher mathTeacher("Mr.Smith", 35, "456 Elm St");
    mathTeacher.display();
    mathTeacher.teach();

    return 0;
}