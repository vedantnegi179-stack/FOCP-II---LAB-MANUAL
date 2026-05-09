#include <iostream>
using namespace std;

class Course {
    string courseName;
    string instructor;
    int duration;

public:
    Course(string c, string i, int d) {
        courseName = c;
        instructor = i;
        duration = d;
    }

    void display() {
        cout << "Course Name: " << courseName << endl;
        cout << "Instructor: " << instructor << endl;
        cout << "Duration: " << duration << " weeks" << endl;
    }

    ~Course() {
        cout << courseName << " course deleted" << endl;
    }
};

int main() {
    Course c1("C++", "Rahul", 6);
    Course c2("Java", "Aman", 8);

    c1.display();
    cout << endl;

    c2.display();

    return 0;
}