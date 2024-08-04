#include <iostream>
#include <string>

using namespace std;

class Course {
protected:
    string title;
    string instructor;
    double price;

public:
    Course(const string& title, const string& instructor, double price)
        : title(title), instructor(instructor), price(price) {}

    void display() {
        cout << "Course Title: " << title << endl;
        cout << "Instructor: " << instructor << endl;
        cout << "Price: ₹" << price << endl;
    }
};

class MathCourse : public Course {
private:
    string level;

public:
    MathCourse(const string& title, const string& instructor, double price, const string& level)
        : Course(title, instructor, price), level(level) {}

    void display() {
        Course::display();
        cout << "Level: " << level << endl;
    }
};

class PhysicsCourse : public Course {
private:
    string level;

public:
    PhysicsCourse(const string& title, const string& instructor, double price, const string& level)
        : Course(title, instructor, price), level(level) {}

    void display() {
        Course::display();
        cout << "Level: " << level << endl;
    }
};

class ProgrammingCourse : public Course {
protected: 
    string programmingLanguage;

public:
    ProgrammingCourse(const string& title, const string& instructor, double price, const string& programmingLanguage)
        : Course(title, instructor, price), programmingLanguage(programmingLanguage) {}

    void display() {
        Course::display();
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};

class HybridCourse : public MathCourse, public ProgrammingCourse {
public:
    HybridCourse(const string& title, const string& instructor, double price, const string& level, const string& programmingLanguage)
        : MathCourse(title, instructor, price, level), ProgrammingCourse(title, instructor, price, programmingLanguage) {}

    void display() {
        MathCourse::display();
        cout << "Programming Language: " << programmingLanguage << endl; // Now accessible
    }
};

int main() {
    MathCourse mathCourse("Mathematics", "John Doe", 99.99, "Advanced");
    PhysicsCourse physicsCourse("Physics", "Jane Smith", 149.99, "Intermediate");
    ProgrammingCourse programmingCourse("Programming", "Alice Johnson", 199.99, "C++");
    HybridCourse hybridCourse("Hybrid", "Bob Williams", 299.99, "Advanced", "Python");

    mathCourse.display();
    cout << endl;
    physicsCourse.display();
    cout << endl;
    programmingCourse.display();
    cout << endl;
    hybridCourse.display();

    return 0;
}