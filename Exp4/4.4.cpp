#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string className;
    int rollNumber;
    int marks;

public:
    void setName(string studentName) {
        name = studentName;
    }

    void setClassName(string studentClassName) {
        className = studentClassName;
    }

    void setRollNumber(int studentRollNumber) {
        rollNumber = studentRollNumber;
    }

    void setMarks(int studentMarks) {
        marks = studentMarks;
    }

    char calculateGrade() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student student;
    string name, className;
    int rollNumber, marks;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter class name: ";
    getline(cin, className);

    cout << "Enter roll number: ";
    cin >> rollNumber;

    cout << "Enter marks: ";
    cin >> marks;

    cout << endl;

    student.setName(name);
    student.setClassName(className);
    student.setRollNumber(rollNumber);
    student.setMarks(marks);

    cout << "Student Information :" << endl;
    student.displayInfo();

    return 0;
}