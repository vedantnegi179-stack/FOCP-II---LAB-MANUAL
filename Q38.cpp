#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    bool hasUpper = false, hasLower = false;
    bool hasDigit = false, hasSpecial = false;

    for (char ch : password) {
        if (isupper(ch))
            hasUpper = true;
        else if (islower(ch))
            hasLower = true;
        else if (isdigit(ch))
            hasDigit = true;
        else if (ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='!' || ch=='&' || ch=='*')
            hasSpecial = true;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial)
        cout << "Valid Password";
    else
        cout << "Invalid Password";

    return 0;
}