#include <iostream>
using namespace std;

class Product {
    string name;
    int price;
    int quantity;

public:
    Product(string n, int p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    int totalCost() {
        return price * quantity;
    }

    void display() {
        cout << "Product: " << name << endl;
        cout << "Total Cost: " << totalCost() << endl;
    }

    ~Product() {
        cout << name << " removed from memory" << endl;
    }
};

int main() {
    Product p1("Laptop", 50000, 2);
    Product p2("Phone", 20000, 3);

    p1.display();
    cout << endl;

    p2.display();

}