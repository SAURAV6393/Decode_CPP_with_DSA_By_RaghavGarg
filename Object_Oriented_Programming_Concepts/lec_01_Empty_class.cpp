#include <iostream>
using namespace std;

// Empty class
class Hero {
    // Koi data member aur member function nahi hai.
};

int main() {

    // Static object
    Hero h1;

    // Empty class ka size 1 byte hota hai.
    cout << "Size of Hero object : " << sizeof(h1) << " byte" << endl; // output : 1 byte

    return 0;
}

// Reason (Interview Point ⭐)

// Agar class completely empty ho:

// class Hero { };

// to logically iska size 0 bytes lagna chahiye.

// Lekin C++ me empty class ka size 1 byte hota hai.

// Kyu?

// Compiler har object ke liye unique memory address maintain karta hai.

// Agar size 0 hota, to:

// Hero h1;
// Hero h2;

// Dono objects ka address same ho jata.

// cout << &h1 << endl;
// cout << &h2 << endl;

// Ye C++ ke object model ke against hai, kyunki har object ki unique identity (unique address) honi chahiye.

// Isliye compiler minimum 1 byte allocate karta hai.

// Example
// #include <iostream>
// using namespace std;

// class Hero { };

// int main() {

//     Hero h1, h2;

//     cout << "Size of Hero : " << sizeof(Hero) << endl;

//     cout << "Address of h1 : " << &h1 << endl;
//     cout << "Address of h2 : " << &h2 << endl;
// }
// Possible Output
// Size of Hero : 1
// Address of h1 : 0x61ff08
// Address of h2 : 0x61ff09

// Dhyan do:

// Size = 1 byte
// h1 aur h2 ke addresses alag hain.
// Interview Answer (30 seconds)

// Empty class ka size 1 byte hota hai, 0 byte nahi. Reason ye hai ki C++ me har object ki unique identity aur unique memory address hona chahiye. Agar size 0 hota, to multiple objects ka address same ho jata. Isliye compiler minimum 1 byte allocate karta hai.

// ✅ Ye OOP interviews ka bahut common question hai.


// //
// 1. Padding (Structure Padding)

// Padding ka matlab hai compiler extra bytes add karta hai taaki data memory me efficiently access ho sake.

// Example:
// #include <iostream>
// using namespace std;

// struct A {
//     char c;   // 1 byte
//     int x;    // 4 bytes
// };

// int main() {
//     cout << sizeof(A);
// }
// Memory Layout
// Address:
// c        -> 1 byte
// padding  -> 3 bytes
// x        -> 4 bytes

// Total = 8 bytes

// Agar padding na hoti:

// 1 + 4 = 5 bytes

// Lekin compiler int ko 4-byte boundary par rakhna chahta hai, isliye 3 bytes ki padding add karta hai.

// Interview Point
// sizeof(struct) expected se bada aa sakta hai.
// Padding performance improve karti hai.

// 2. Greedy Alignment
// Ye C++ keyword nahi hai. Ye generally Greedy Algorithm ka concept hai.
// Greedy algorithm me har step par locally best choice li jati hai, umeed hoti hai ki final answer optimal hoga.
// Example: Coin Change

// Coins:

// 1, 2, 5, 10
// Amount = 18

// Greedy:

// 10
// 5
// 2
// 1

// Total = 4 coins.

// Har step par sabse bada possible coin choose kiya gaya.

// Dusra example:

// Activity Selection
// Fractional Knapsack
// Huffman Coding
// Minimum Platforms (sorting ke saath)
// Placement/Interview ke liye yaad rakho
// Term	Meaning
// Padding	Compiler extra bytes add karta hai memory alignment ke liye.
// Alignment	Data ko uski required memory boundary (jaise 4-byte, 8-byte) par store karna.
// Greedy Algorithm	Har step par best local decision lena taaki optimal solution mile.