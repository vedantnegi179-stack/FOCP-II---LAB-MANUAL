#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() {
        cout << "Area = " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1(10, 5);
    r1.area();

    return 0;
}