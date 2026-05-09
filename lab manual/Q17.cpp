#include <iostream>
using namespace std;

int main() {
    int n, sum=0, temp, r, arm=0;
    cin >> n;

    // Perfect
    for(int i=1;i<n;i++)
        if(n % i == 0) sum += i;

    if(sum == n) cout << "Perfect\n";

    // Armstrong
    temp = n;
    while(temp) {
        r = temp % 10;
        arm += r*r*r;
        temp /= 10;
    }

    if(arm == n) cout << "Armstrong";

    return 0;
}