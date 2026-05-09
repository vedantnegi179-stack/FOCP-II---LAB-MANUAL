#include <iostream>
using namespace std;

class Book {
    string title;
    int price;

public:
    Book(string t, int p) {
        title = t;
        price = p;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b1("C++ Basics", 500);
    Book b2("OOP Concepts", 700);

    b1.display();
    cout << endl;
    b2.display();

    return 0;
}