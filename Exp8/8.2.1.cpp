#include <iostream>
#include <string>

using namespace std;

class BonusCalculator {
public:
    virtual double calculate_bonus() const = 0;
};

class Employee {
protected:
    string name;
    int employee_id;
    double salary;

public:
    Employee(const string& name, int employee_id, double salary)
        : name(name), employee_id(employee_id), salary(salary) {}

    void display_details() const {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

class Manager : public Employee, public BonusCalculator {
private:
    string department;

public:
    Manager(const string& name, int employee_id, double salary, const string& department)
        : Employee(name, employee_id, salary), department(department) {}

    double calculate_bonus() const override {
        return 0.10 * salary;
    }

    void display_details() const {
        Employee::display_details();
        cout << "Department: " << department << endl;
    }
};

class Developer : public Employee, public BonusCalculator {
private:
    int projects;

public:
    Developer(const string& name, int employee_id, double salary, int projects)
        : Employee(name, employee_id, salary), projects(projects) {}

    double calculate_bonus() const override {
        return 1000 * projects;
    }

    void display_details() const {
        Employee::display_details();
        cout << "Projects: " << projects << endl;
    }
};

int main() {
    Manager manager("John Doe", 101, 50000, "HR");
    Developer developer("Jane Smith", 202, 60000, 5);

    cout << "Manager Details:" << endl;
    manager.display_details();
    cout << "Bonus: Rs. " << manager.calculate_bonus() << endl << endl;

    cout << "Developer Details:" << endl;
    developer.display_details();
    cout << "Bonus: Rs. " << developer.calculate_bonus() << endl;

    return 0;
}