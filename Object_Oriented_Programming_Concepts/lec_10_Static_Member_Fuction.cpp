#include<iostream>
using namespace std;

class Hero{

private:
    // Non-static Data Member
    int health;

public:

    // Static Data Member
    static int totalHeroes;

    // Constructor
    Hero(int h){

        health = h;

        // Har object banne par count increase hoga
        totalHeroes++;
    }

    // Normal Member Function
    void print(){

        cout<<"Health : "<<health<<endl;
    }

    // Static Member Function
    static void showTotalHeroes(){

        cout<<"Total Heroes : "<<totalHeroes<<endl;

        // cout<<health;      // ❌ Error

        // Kyuki health non-static member hai.
        // Static function ke paas kisi object ka address nahi hota.
    }

};

// Static Data Member Definition
int Hero::totalHeroes = 0;

int main(){

    // Object 1
    Hero h1(100);

    // Object 2
    Hero h2(200);

    // Object 3
    Hero h3(300);

    // Normal Function Call
    h1.print();
    h2.print();
    h3.print();

    cout<<endl;

    // Static Function Call
    Hero::showTotalHeroes();

    return 0;
}


// Interview Questions

// Q1 Static Member Function kya hota hai?
// Answer
// Static Member Function class ka function hota hai.
// Ye kisi object se belong nahi karta.

// Q2 Static Function ko kaise call karte hain?
// Hero::showTotalHeroes();

// Q3 Kya object se call kar sakte hain?
// Hero h;
// h.showTotalHeroes();
// Haan.
// Lekin recommended nahi.

// Q4 Static Function kis-kis ko access kar sakta hai?
// ✔ Static Variables
// ✔ Dusre Static Functions

// Q5 Static Function Non-static variable ko access kyun nahi kar sakta?
// Kyuki uske paas object nahi hota.

// Q6 Static Function me this pointer hota hai?
// ❌ Nahi.

// Q7 (Most Asked)
// Interviewer
// Agar static function me health access nahi kar sakte, to object pass kar dein to?
// static void show(Hero &h){
//     cout << h.health << endl;
// }

// Answer: Haan, ye valid hai. Static function ke paas khud this pointer nahi hota, lekin agar tum object (ya pointer/reference) parameter ke through de do, to us object ke non-static members ko access kar sakte ho.
// Placement Trick (1 Line)
// "Static Function ke paas this pointer nahi hota, isliye wo directly sirf static members ko hi access kar sakta hai."