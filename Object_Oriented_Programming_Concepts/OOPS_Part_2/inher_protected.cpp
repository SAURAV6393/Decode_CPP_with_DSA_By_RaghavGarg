#include <iostream>
using namespace std;

class Parent {
protected:
    int salary;
    int balance;

public:
    string name;
    int age;

    Parent(int s, int b) {
        this->salary = s;
        this->balance = b;
    }
};

class Child : protected Parent {
public:
    Child(int s, int b, string n, int a) : Parent(s, b) {
        this->name = n;
        this->age = a;
    }

    void display() {
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "Salary : " << this->salary << endl;
        cout << "Total Balance : " << this->balance << endl;
    }
};

int main() {
    Child Father(241125, 5235235, "Ravi", 56);

    Father.display();

    return 0;
}

// | Base Class Member Access | Public Inheritance | Protected Inheritance | Private Inheritance |
// | ------------------------ | ------------------ | --------------------- | ------------------- |
// | **Public**               | Public             | Protected             | Private             |
// | **Protected**            | Protected          | Protected             | Private             |
// | **Private**              | Not Accessible     | Not Accessible        | Not Accessible      |
