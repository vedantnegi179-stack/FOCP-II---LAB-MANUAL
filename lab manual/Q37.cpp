#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool valid = true;

    for(char c : s) {
        if(!isalnum(c)) {
            valid = false;
            break;
        }
    }

    if(valid) cout << "Valid Username";
    else cout << "Invalid Username";
}