#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string pass;
    cin >> pass;

    bool upper=0, lower=0, digit=0, special=0;

    for(char c : pass) {
        if(isupper(c)) upper=1;
        else if(islower(c)) lower=1;
        else if(isdigit(c)) digit=1;
        else if(c=='@'||c=='#'||c=='$'||c=='%'||c=='!'||c=='&'||c=='*')
            special=1;
    }

    if(upper && lower && digit && special)
        cout << "Valid Password";
    else
        cout << "Invalid Password";
}