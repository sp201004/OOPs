#include <iostream>
using namespace std;

class Robot {
protected:
    int serialNumber;
    int batteryLevel;

public:
    Robot(int serial, int battery) : serialNumber(serial), batteryLevel(battery) {}

    void displayInfo() {
        cout << "Serial Number: " << serialNumber << endl;
        cout << "Battery Level: " << batteryLevel << "%" << endl;
    }
};

class HumanoidRobot : public Robot {
public:
    HumanoidRobot(int serial, int battery) : Robot(serial, battery) {}

    void performHumanLikeMovement() {
        cout << "Performing human-like movement." << endl;
    }
};

class IndustrialRobot : public HumanoidRobot {
public:
    IndustrialRobot(int serial, int battery) : HumanoidRobot(serial, battery) {}

    void performIndustrialTask() {
        cout << "Performing industrial task." << endl;
    }
};

class ServiceRobot : public IndustrialRobot {
public:
    ServiceRobot(int serial, int battery) : IndustrialRobot(serial, battery) {}

    void performServiceActivity() {
        cout << "Performing service-related activity." << endl;
    }
};

int main() {
    ServiceRobot robot(1234, 80);

    robot.displayInfo();

    robot.performHumanLikeMovement();
    robot.performIndustrialTask();
    robot.performServiceActivity();

    return 0;
}