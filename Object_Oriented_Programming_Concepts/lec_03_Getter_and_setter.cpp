#include <iostream>
using namespace std;

class Hero {
public:
    int health;
    string name;

    // Constructor
    Hero() {
        health = 0;
        name = "";
    }

    int getHealth() {
        return health;
    }

    string getName() {
        return name;
    }

    void setHealth(int health) {
        this->health = health;
    }

    void setName(string name) {
        this->name = name;
    }
};

int main() {

    // Static Allocation
    Hero a;
    cout << "Health is : " << a.getHealth() << endl;

    a.setHealth(100);
    a.setName("Saurav");

    cout << "Health is : " << a.getHealth() << endl;
    cout << "Name is : " << a.getName() << endl;

    cout << endl;

    // Dynamic Allocation
    Hero *b = new Hero;

    cout << "Health is : " << b->getHealth() << endl;

    b->setHealth(90);
    b->setName("Rahul");

    cout << "Health is : " << b->getHealth() << endl;
    cout << "Name is : " << b->getName() << endl;

    delete b;

    return 0;
}