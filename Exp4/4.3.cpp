#include <iostream> 
#include <string> 

using namespace std;

class Employee { 
  private: 
    string name; 
    int employeeId; 
    double salary;

  public:
    Employee(const string & empName, int empId, double empSalary): name(empName), employeeId(empId), salary(empSalary) {}

    void calculateSalary(double performanceRating) {
      if (performanceRating >= 0 && performanceRating <= 10) { 
        salary *= performanceRating;
        cout << endl;
      }
    }
    void setSalary(double empSalary) {
      salary = empSalary; 
    }

    string getName() const {
      return name;
    }

    int getEmployeeId() const {
      return employeeId;
    }

    double getSalary() const {
      return salary;
    }
};

int main() {
  string empName; 
  int empId;
  double empSalary;

  cout << "Enter Employee Name: ";
  cin >> empName;

  cout << "Enter Employee ID: ";
  cin >> empId;

  cout << "Enter Employee Actual salary: ₹";
  cin >> empSalary;

  Employee employee(empName, empId, empSalary);

  double performanceRating;
  cout << "Enter Employee Performance rating(1 to 10): ";
  cin >> performanceRating;

  employee.calculateSalary(performanceRating);

  cout << "Employee Updated Salary" << endl;
  
  cout << "Name: " << employee.getName() << endl;
  cout << "Employee ID: " << employee.getEmployeeId() << endl;
  cout << "Actual Salary: ₹" << empSalary << endl;
  cout << "Updated Salary With Bonus : ₹" << employee.getSalary() << endl;
  return 0;
}