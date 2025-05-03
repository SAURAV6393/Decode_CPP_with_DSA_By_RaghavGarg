#include <iostream>
#include <string>
using namespace std;

// Define a class Bike
class Bike {
public:
    string name;    // bike name
    int prize;      // bike price
    string colour;  // bike color

    // Default constructor
    Bike() {
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor (takes only prize)
    Bike(int prize) {
        this->prize = prize;
        cout << "Parameterized constructor (prize) called" << endl;
    }

    // Overloaded parameterized constructor (name, prize, colour)
    Bike(string name, int prize, string colour) {
        this->name = name;
        this->prize = prize;
        this->colour = colour;
        cout << "Full parameterized constructor (name, prize, colour) called" << endl;
    }

    // Copy constructor
    Bike(const Bike &b) {
        name = b.name;
        prize = b.prize;
        colour = b.colour;
        cout << "Copy constructor called" << endl;
    }

    // Destructor
    ~Bike() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    // Create object tvs using parameterized constructor (with only prize)
    Bike tvs(23);

    // Create object shine using default constructor
    Bike shine;

    // Assign values to tvs object manually
    tvs.name = "Honda";
    tvs.prize = 78009;  // updating prize
    tvs.colour = "red";

    // Create object inside if block → constructor + destructor will be called inside this block
    bool flag = true;
    if (flag == true) {
        Bike b;  // calls default constructor
        // object 'b' gets destroyed automatically at end of this block → calls destructor
    }

    // Print tvs object values
    cout << tvs.name << endl;
    cout << tvs.prize << endl;
    cout << tvs.colour << endl;

    // Create an object using full parameterized constructor
    Bike pulsar("Bajaj Pulsar", 95000, "Black");

    // Print pulsar object values
    cout << pulsar.name << endl;
    cout << pulsar.prize << endl;
    cout << pulsar.colour << endl;

    return 0;
}
