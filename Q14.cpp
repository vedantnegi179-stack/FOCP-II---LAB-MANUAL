#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    do {
        cout << "\n1.Add 2.Sub 3.Mul 4.Div 5.Exit\n";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cin >> a >> b;
        }

        switch(choice) {
            case 1: cout << a + b; break;
            case 2: cout << a - b; break;
            case 3: cout << a * b; break;
            case 4: cout << a / b; break;
        }
    } while(choice != 5);

    return 0;
}