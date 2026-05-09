#include <iostream>
using namespace std;

int main() {
    int itemNo, quantity;
    float unitPrice, totalAmount, discount, finalAmount;

    // Input
    cout << "Enter Item Number: ";
    cin >> itemNo;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Unit Price: ";
    cin >> unitPrice;

    // Calculations
    totalAmount = quantity * unitPrice;
    discount = totalAmount * 0.20;   // 20% discount
    finalAmount = totalAmount - discount;

    // Output
    cout << "\n----- Bill Details -----\n";
    cout << "Item Number   : " << itemNo << endl;
    cout << "Total Amount  : " << totalAmount << endl;
    cout << "Discount (20%): " << discount << endl;
    cout << "Final Amount  : " << finalAmount << endl;

    return 0;
}
