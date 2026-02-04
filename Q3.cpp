#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp, convertedTemp;

    cout << "Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        convertedTemp = (temp * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << convertedTemp << "°F\n";
    }
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        convertedTemp = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << convertedTemp << "°C\n";
    }
    else {
        cout << "Invalid choice!\n";
    }

    return 0;
}
