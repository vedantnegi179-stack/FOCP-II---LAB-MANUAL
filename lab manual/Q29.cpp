#include <iostream>
using namespace std;

int main() {
    int t[30], min;

    for(int i=0;i<30;i++) cin >> t[i];

    min = t[0];
    for(int i=1;i<30;i++)
        if(t[i]<min) min=t[i];

    cout << "Min temp: " << min;
}