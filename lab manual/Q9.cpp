#include <iostream>
#include <cctype>   // for isalpha, isdigit, tolower
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isdigit(ch)) {
        cout << "It is a Number." << endl;
    }
    else if (isalpha(ch)) {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << "It is a Vowel." << endl;
        } else {
            cout << "It is a Consonant." << endl;
        }
    }
    else {
        cout << "It is a Special Character." << endl;
    }

    return 0;
}
