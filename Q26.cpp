#include <iostream>
using namespace std;

int main() {
    int m[5], total=0;

    for(int i=0;i<5;i++) {
        cin >> m[i];
        total += m[i];
    }

    cout << "Total: " << total << endl;
    cout << "Percentage: " << total/5.0;
}