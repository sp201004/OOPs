#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    int vehicle_id;
    string make;
    string model;
    int year;
    bool rented;

public:
    Vehicle(int id, string make, string model, int year) : vehicle_id(id), make(make), model(model), year(year), rented(false) {}

    void rent() {
        if (!rented) {
            rented = true;
            cout << make << " " << model << " " << year << " has been rented." << endl;
        } else {
            cout << "This vehicle is already rented." << endl;
        }
    }

    void return_vehicle() {
        if (rented) {
            rented = false;
            cout << make << " " << model << " " << year << " has been returned." << endl;
        } else {
            cout << "This vehicle is not currently rented." << endl;
        }
    }
};

class Car : public Vehicle {
private:
    int seating_capacity;

public:
    Car(int id, string make, string model, int year, int seating_capacity) : Vehicle(id, make, model, year), seating_capacity(seating_capacity) {}
};

class Truck : public Vehicle {
private:
    int cargo_capacity;

public:
    Truck(int id, string make, string model, int year, int cargo_capacity) : Vehicle(id, make, model, year), cargo_capacity(cargo_capacity) {}
};

class Motorcycle : public Vehicle {
public:
    Motorcycle(int id, string make, string model, int year) : Vehicle(id, make, model, year) {}
};

int main() {
    Car car(1, "Toyota", "Camry", 2022, 5);
    Truck truck(2, "Ford", "F-150", 2021, 1000);
    Motorcycle motorcycle(3, "Harley-Davidson", "Sportster", 2020);

    car.rent();
    truck.rent();
    motorcycle.rent();

    car.return_vehicle();
    truck.return_vehicle();
    motorcycle.return_vehicle();

    return 0;
}