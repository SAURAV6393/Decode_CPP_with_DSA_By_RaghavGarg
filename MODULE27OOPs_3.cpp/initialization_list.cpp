#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;

public:
    // Constructor using initialization list
    Student(int r, string n) : rollNo(r), name(n) {
        cout << "Constructor (initialization list) called" << endl;
    }

    // Constructor without initialization list (assigning inside constructor body)
    Student(int r) {
        rollNo = r;
        name = "Unknown";  // manual assignment inside constructor
        cout << "Constructor (assignment inside body) called" << endl;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Aman");   // uses initialization list constructor
    s1.display();

    Student s2(102);           // uses constructor with assignment inside body
    s2.display();

    return 0;
}
