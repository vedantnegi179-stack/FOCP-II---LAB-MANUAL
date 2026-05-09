#include <iostream>
using namespace std;

int main() {
    int a[5];

    for(int i=0;i<5;i++) cin >> a[i];

    int max1 = a[0], max2 = a[1];

    if(max2 > max1) swap(max1, max2);

    for(int i=2;i<5;i++) {
        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] != max1)
            max2 = a[i];
    }

    cout << "Largest: " << max1 << endl;
    cout << "Second Largest: " << max2;
}