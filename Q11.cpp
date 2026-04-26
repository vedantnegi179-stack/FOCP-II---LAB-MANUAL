#include <iostream>
using namespace std;

int main() {
    int quantity;
    float price, total;

    cout << "Enter quantity and price per item: ";
    cin >> quantity >> price;

    total = quantity * price;

    if (quantity > 1000)
        total *= 0.9;  // 10% discount

    cout << "Total expense: " << total;
    return 0;
}