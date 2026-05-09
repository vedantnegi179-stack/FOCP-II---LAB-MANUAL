#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter your marks1: " ;
    cin >> a;

    cout << "Enter your marks2: " ;
    cin >> b;

    cout << "Enter your marks3: " ;
    cin >> c;

    float sum = a + b + c;
    
    
    double avg = sum / 3.0; 

    cout << "Sum: " << sum ;
    cout << "Average: " << avg ;

    return 0;
}