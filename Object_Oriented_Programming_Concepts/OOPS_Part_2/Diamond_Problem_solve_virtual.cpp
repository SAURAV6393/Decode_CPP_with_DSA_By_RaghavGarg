#include <iostream>
using namespace std;

class A {
public:
    virtual void display() {
        cout << "A ka display()" << endl;
    }

    virtual ~A() {}
};

class B : virtual public A {
public:
    void display() override {
        cout << "B ka display()" << endl;
    }
};

class C : virtual public A {
public:
    void display() override {
        cout << "C ka display()" << endl;
    }
};

class D : public B, public C {
public:
    void display() override {
        cout << "D ka display()" << endl;
    }
};

int main() {
    D d;

    d.display();

    A* ptr = &d;
    ptr->display();

    return 0;
}

// "Diamond problem is resolved using virtual inheritance, not virtual functions. Virtual inheritance ensures that the derived class contains only one shared instance of the common base class."