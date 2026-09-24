#include<iostream>
using namespace std;

class Hero{

public:

    // Static data member declaration
    static int score;

};

// Static data member definition
int Hero::score = 100;

int main(){

    Hero h1;
    Hero h2;
    Hero h3;

    cout<<"Initial Values"<<endl;

    cout<<h1.score<<endl;
    cout<<h2.score<<endl;
    cout<<h3.score<<endl;

    cout<<endl;

    // h1 ke through value change
    h1.score = 500;

    cout<<"After Changing Through h1"<<endl;

    cout<<h1.score<<endl;
    cout<<h2.score<<endl;
    cout<<h3.score<<endl;

    return 0;
}

    //        score = 100

    //            |
    //   -------------------
    //   |        |        |
    //  h1       h2       h3

//     #include<iostream>
// using namespace std;

// class Hero{

// public:

//     // Static variable
//     static int count;

//     Hero(){

//         count++;

//         cout<<"Constructor Called"<<endl;
//         cout<<"Current Objects : "<<count<<endl;
//         cout<<endl;
//     }

//     ~Hero(){

//         count--;

//         cout<<"Destructor Called"<<endl;
//         cout<<"Remaining Objects : "<<count<<endl;
//         cout<<endl;
//     }

// };

// int Hero::count = 0;

// int main(){

//     Hero h1;
//     Hero h2;
//     Hero h3;

//     return 0;
// // }


// | Normal Data Member              | Static Data Member                 |
// | ------------------------------- | ---------------------------------- |
// | Har object ki alag copy         | Sirf ek copy                       |
// | Stack/Object memory             | Static Storage Area                |
// | Object ke saath banta hai       | Program start me allocate hota hai |
// | Object destroy hone par destroy | Program end tak rehta hai          |
// | Object ka data                  | Class ka shared data               |
// // 

// Interview Questions ⭐⭐⭐⭐⭐

// Q1. Static Data Member kya hota hai?
// Ek aisa member jiski sirf ek copy hoti hai aur wo class ke sabhi objects ke beech share hoti hai.

// Q2. Static variable kahan store hota hai?
// Static Storage Area (Data Segment) me.

// Q3. Static member ko define kahan karte hain?
// Class ke bahar.
// int Hero::count = 0;

// Q4. Kya static member private ho sakta hai?
// ✔ Haan.
// Usse access karne ke liye public static member function ya friend function use kar sakte hain.

// Q5. Static function kya access kar sakta hai?
// ✔ Static Members
// ❌ Non-static Members

// Q6. Kya static function me this pointer hota hai?
// ❌ Nahi.
// Kyunki this pointer object ko point karta hai aur static function kisi object se belong nahi karta.

// Q7. Kya static member ko access karne ke liye object banana zaruri hai?
// ❌ Nahi.
// Direct
// Hero::count;

// Q8. Static variable ka lifetime kitna hota hai?
// Program start se lekar program end tak.