#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* ptr;

    Dog d;

    ptr = &d;

    ptr->sound();

    return 0;
}

// | Feature       | Overloading        | Overriding                      |
// | ------------- | ------------------ | ------------------------------- |
// | Classes       | Usually same class | Parent + Child                  |
// | Inheritance   | Not required       | Required                        |
// | Function name | Same               | Same                            |
// | Parameters    | Different          | Same                            |
// | `virtual`     | Not required       | Needed for runtime polymorphism |
// | Polymorphism  | Compile-time       | Runtime                         |
// | Main concept  | Static binding     | Dynamic binding                 |
