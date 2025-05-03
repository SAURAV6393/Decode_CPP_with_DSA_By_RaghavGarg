#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;  // non-static (object-level) variable
    static int count;  // static (class-level) variable

public:
    // Constructor
    Student(int r) {
        rollNo = r;
        count++;  // increment static variable
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
    }

    // Static function
    static void showCount() {
        cout << "Total Students: " << count << endl;
        // ❌ cout << rollNo;  // ERROR: cannot access non-static members
    }
};

// Initialize static variable
int Student::count = 0;

int main() {
    Student s1(101);
    Student s2(102);

    s1.display();
    s2.display();

    // Call static function using class name
    Student::showCount();

    // Create another object
    Student s3(103);
    s3.display();

    Student::showCount();

    return 0;
}
