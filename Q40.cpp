#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    string s, word, result="";
    getline(cin, s);

    stringstream ss(s);

    // remove extra spaces
    while(ss >> word) {
        if(result != "") result += " ";
        result += word;
    }

    // sentence case
    for(int i=0;i<result.size();i++) {
        if(i==0) result[i] = toupper(result[i]);
        else result[i] = tolower(result[i]);
    }

    int words=0, digits=0, special=0;

    for(char c: result) {
        if(isdigit(c)) digits++;
        else if(!isalnum(c) && c!=' ') special++;
    }

    stringstream ss2(result);
    while(ss2 >> word) words++;

    cout << "Processed: " << result << endl;
    cout << "Words: " << words << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special: " << special << endl;

    if(special==0)
        cout << "Valid String";
    else
        cout << "Invalid String";
}