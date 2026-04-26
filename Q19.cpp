#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i=a;i<=b;i++) {
        int flag=1;
        if(i<=1) flag=0;

        for(int j=2;j<=i/2;j++) {
            if(i%j==0) {
                flag=0;
                break;
            }
        }

        if(flag) cout << i << " ";
    }
}