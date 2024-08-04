#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string vehicleID;
    string make;
    string model;
    int year;

public:
    Vehicle(const string& id, const string& make, const string& model, int year)
        : vehicleID(id), make(make), model(model), year(year) {}

    virtual void displayDetails() const {
        cout << "Vehicle ID: " << vehicleID << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle {
protected:
    int seatingCapacity;

public:
    Car(const string& id, const string& make, const string& model, int year, int seatingCapacity)
        : Vehicle(id, make, model, year), seatingCapacity(seatingCapacity) {}

    void displayDetails() const override {
        Vehicle::displayDetails();
        cout << "Seating Capacity: " << seatingCapacity << endl;
    }
};

class Truck : public Vehicle {
protected:
    int cargoCapacity;

public:
    Truck(const string& id, const string& make, const string& model, int year, int cargoCapacity)
        : Vehicle(id, make, model, year), cargoCapacity(cargoCapacity) {}

    void displayDetails() const override {
        Vehicle::displayDetails();
        cout << "Cargo Capacity: " << cargoCapacity << endl;
    }
};

class Motorcycle : public Vehicle {
protected:
    string type;

public:
    Motorcycle(const string& id, const string& make, const string& model, int year, const string& type)
        : Vehicle(id, make, model, year), type(type) {}

    void displayDetails() const override {
        Vehicle::displayDetails();
        cout << "Type: " << type << endl;
    }
};

class SUV : public Car {
public:
    SUV(const string& id, const string& make, const string& model, int year, int seatingCapacity)
        : Car(id, make, model, year, seatingCapacity) {}
};

class SportBike : public Motorcycle {
public:
    SportBike(const string& id, const string& make, const string& model, int year, const string& type)
        : Motorcycle(id, make, model, year, type) {}
};

int main() {
    Car car("C001", "Toyota", "Camry", 2022, 5);
    Truck truck("T001", "Ford", "F-150", 2022, 2000);
    Motorcycle motorcycle("M001", "Honda", "CBR1000RR", 2022, "Sport");
    SUV suv("S001", "Jeep", "Grand Cherokee", 2022, 7);
    SportBike sportBike("SB001", "Ducati", "Panigale V4", 2022, "Superbike");

    car.displayDetails();
    cout << endl;

    truck.displayDetails();
    cout << endl;

    motorcycle.displayDetails();
    cout << endl;

    suv.displayDetails();
    cout << endl;

    sportBike.displayDetails();
    cout << endl;

    return 0;
}