#include<iostream>
using namespace std;

class Hero{
public:

    Hero(){
        cout<<"Contructor call hua :"<<endl;
    }

   ~Hero(){
        cout<<"Destructor call hua :"<<endl;
    }


};

int main(){
     // static allocation
     Hero a ;                // yeh apne app destructor call kr deta hai baad mei (Static)

     Hero *b = new Hero; // dynamic allocation 
     delete b;  // yeh manually call krna pdta hai destructor ko (Dynamic)


    //  constructor and destructor apne object ke liye ek baar call hoga
}



// | Static Object                          | Dynamic Object                        |
// | -------------------------------------- | ------------------------------------- |
// | Stack me banta hai                     | Heap me banta hai                     |
// | Automatically destroy hota hai         | Manually `delete` karna padta hai     |
// | Destructor automatically call hota hai | `delete` par destructor call hota hai |

// Interview Questions ⭐⭐⭐⭐⭐

// Q1. Destructor kab call hota hai?
// Jab object destroy hota hai.

// Q2. Static object ka destructor kaun call karta hai?
// Compiler automatically, jab object scope se bahar jata hai ya program end hota hai.

// Q3. Dynamic object ka destructor kaun call karta hai?
// Programmer, using:
// delete ptr;

// Q4. Destructor ko manually call kar sakte hain?
// Haan, technically:
// a.~Hero();
// Lekin normal code me kabhi nahi karna chahiye, kyunki object ka lifetime manually tod dete ho aur agar baad me object dobara automatically destroy hua to undefined behavior ho sakta hai. Isliye real-world code me destructor ko direct call nahi karte.

// Q5. Agar delete bhool gaye to kya hoga?
// Destructor call nahi hoga.
// Heap memory free nahi hogi.
// Memory Leak hoga.

// Q6. Ek object ke liye constructor aur destructor kitni baar call hote hain?
// Exactly ek-ek baar.
// Constructor → Object create hote waqt.
// Destructor → Object destroy hote waqt.



// Homework
// const keyword ,object creation  , function , intialization list