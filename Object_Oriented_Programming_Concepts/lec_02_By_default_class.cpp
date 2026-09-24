#include <iostream>
using namespace std;

// By default, class ke members private hote hain.
// Yahan public likha hai isliye data members ko main() se access kar sakte hain.

class Hero {
public:
    int value;   // 4 bytes
    char name;   // 1 byte
};

int main() {

    // Static allocation
    // Object stack memory me create hoga.
    Hero h1;

    // sizeof(object) object ki total memory batata hai.
    // Expected: int(4) + char(1) = 5 bytes
    // Actual: 8 bytes
    // Reason: Padding + Memory Alignment
    cout << "Size of Hero object : " << sizeof(h1) << " bytes" << endl;

    // value initialize nahi hui hai.
    // Isliye isme garbage value hogi.
    cout << "Value : " << h1.value << endl;

    return 0;
}