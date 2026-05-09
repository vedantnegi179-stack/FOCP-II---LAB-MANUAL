#include <iostream>
using namespace std;

int main() {
    int s[10], total=0;

    for(int i=0;i<10;i++) {
        cin >> s[i];
        total += s[i];
    }

    cout << "Total: " << total << endl;
    cout << "Average: " << total/10.0;
}