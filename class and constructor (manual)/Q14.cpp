#include <iostream>
using namespace std;

class Vehicle {
    string vehicleNumber;
    string ownerName;
    string type;
    int fee;

public:
    Vehicle() {
        vehicleNumber = "Not Assigned";
        ownerName = "Unknown";
        type = "General";
        fee = 0;
    }

    Vehicle(string v, string o) {
        vehicleNumber = v;
        ownerName = o;
        type = "General";
        fee = 0;
    }

    Vehicle(string v, string o, string t, int f) {
        vehicleNumber = v;
        ownerName = o;
        type = t;
        fee = f;
    }

    void displayVehicle() {
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Vehicle Type: " << type << endl;
        cout << "Registration Fee: " << fee << endl;
    }
};

int main() {
    Vehicle v1;
    Vehicle v2("DL01AB1234", "Vedant");
    Vehicle v3("DL05XY9876", "Rahul", "Car", 5000);

    v1.displayVehicle();
    cout << endl;

    v2.displayVehicle();
    cout << endl;

    v3.displayVehicle();

    return 0;
}