#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Getter functions
    string getCompany() const {
        return company;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }
    
    void setCompany(const string& c) {
        company = c;
    }

    void setModel(const string& m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }
};

int main() {
    Car myCar;

    string company, model;
    int year;

    cout << "Enter the company of the car: ";
    getline(cin, company);

    cout << "Enter the model of the car: ";
    getline(cin, model);

    cout << "Enter the year of the car: ";
    cin >> year;

    myCar.setCompany(company);
    myCar.setModel(model);
    myCar.setYear(year);

    cout << "\nCar Information:\n";
    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    return 0;
}
