#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, area;

    cout << "Enter the radius of the fountain: ";
    cin >> radius;

    area = M_PI * radius * radius;

    cout << "The area of the circular fountain is: " << area << endl;

    return 0;
}
