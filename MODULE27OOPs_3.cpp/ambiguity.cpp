// #include <iostream>
// using namespace std;

// class A {
// public:
//     void show() {
//         cout << "Class A" << endl;
//     }
// };

// class B {
// public:
//     void show() {
//         cout << "Class B" << endl;
//     }
// };

// class C : public A, public B {
// };

// int main() {a
//     C obj;
//     // obj.show();   // Error: Ambiguous
//     obj.A::show();  
//     obj.B::show();  
// }

#include <iostream>
using namespace std;

class Demo {
public:
    static void show() {
        cout << "Static Method" << endl;
    }
};

int main() {

    Demo::show();   // Object ki zarurat nahi
    return 0;
}