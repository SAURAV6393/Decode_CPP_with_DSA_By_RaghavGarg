 #include <iostream>
using namespace std;

class Customer {

private:
    // Private data member
    // Salary ko directly class ke bahar access nahi kar sakte
    // Ye data hiding ka part hai
    int salary;

public:
    // Public data member
    // Isko main() se directly access kar sakte hain
    string name;

    // Constructor
    // Object create hote hi salary ko initialize karta hai
    Customer(int x) {
        salary = x;
    }

    // Setter function
    // Private salary ko safely modify karne ke liye
    void setSalary(int x) {
        salary = x;
    }

    // Getter function
    // Private salary ki value bahar access karne ke liye
    int getSalary() {
        return salary;
    }

    // Public member function
    // Class ke private data ko access kar sakta hai
    void display() {
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main() {

    // Customer class ka object create kiya
    // Constructor ko 45000 pass kiya
    Customer c(45000);

    // name public hai, isliye directly access kar sakte hain
    c.name = "Saurav";

    // salary private hai, isliye directly access nahi kar sakte
    // c.salary = 50000;  // ❌ Error

    // Private salary ko setter ke through modify kar rahe hain
    c.setSalary(50000);

    // Getter ke through private salary ko read kar rahe hain
    cout << c.getSalary() << endl;

    // display() ke through customer ki details print kar rahe hain
    c.display();

    return 0;
}