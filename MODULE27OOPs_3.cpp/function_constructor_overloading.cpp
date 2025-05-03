#include <iostream>
using namespace std;

class Rectangle {
    int width, height;

public:
    // Constructor Overloading
    Rectangle() { // Default constructor
        width = 0;
        height = 0;
    }

    Rectangle(int w, int h) { // Parameterized constructor
        width = w;
        height = h;
    }

    // Function Overloading
    void area() {
        cout << "Area (no args): " << (width * height) << endl;
    }

    void area(int w, int h) {
        cout << "Area (with args): " << (w * h) << endl;
    }
};

int main() {
    Rectangle r1;            // calls default constructor
    Rectangle r2(4, 5);      // calls parameterized constructor

    r1.area();               // uses default width & height (0)
    r2.area();               // uses initialized width & height (4, 5)

    r1.area(3, 6);           // function overloading with parameters
    r2.area(7, 8);           // function overloading with parameters

    return 0;
}
