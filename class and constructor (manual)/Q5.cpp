#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    float balance;

public:
    BankAccount(int acc, float bal) {
        accountNumber = acc;
        balance = bal;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b1(12345, 10000);
    b1.display();

    return 0;
}