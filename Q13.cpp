#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d;
    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    if (d > 0)
        cout << "Roots: " << (-b + sqrt(d))/(2*a) << " , " << (-b - sqrt(d))/(2*a);
    else if (d == 0)
        cout << "Equal roots: " << -b/(2*a);
    else
        cout << "Imaginary roots";

    return 0;
}