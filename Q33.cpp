#include <iostream>
using namespace std;

int main() {
    int m[3][5];

    for(int i=0;i<3;i++)
        for(int j=0;j<5;j++)
            cin >> m[i][j];

    cout << m[0][1] << endl; // 2nd subject, 1st student
    cout << m[2][4];         // 5th subject, 3rd student
}