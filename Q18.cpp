#include <iostream>
using namespace std;

int main() {
    int n, rev=0, r, temp;
    cin >> n;

    temp = n;
    while(temp) {
        r = temp % 10;
        rev = rev*10 + r;
        temp /= 10;
    }

    if(rev == n) cout << "Palindrome";
    else cout << "Not Palindrome";

    return 0;
}