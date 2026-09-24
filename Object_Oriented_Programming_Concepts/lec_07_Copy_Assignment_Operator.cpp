#include <iostream>
#include <cstring>
using namespace std;

class Hero{
public:

    char *name;

    Hero(){
        name = new char[100];
    }

    void setName(const char n[]){
        strcpy(name,n);
    }

    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<(void*)name<<endl;
        cout<<endl;
    }

    ~Hero(){
        delete [] name;
    }
};

int main(){

    Hero hero1;
    hero1.setName("Babbar");

    Hero hero2;
    hero2.setName("Love");

    hero2 = hero1;       // Compiler Generated Copy Assignment

    hero1.name[0]='G';

    hero1.print();
    hero2.print();
}

// Interview Questions ⭐⭐⭐⭐⭐
// Q1. Copy Constructor kab call hota hai?

// Jab naya object existing object se initialize hota hai.

// Hero h2(h1);

// Hero h2 = h1;
// Q2. Copy Assignment Operator kab call hota hai?

// Jab existing object me = se value copy hoti hai.

// Hero h2;

// h2 = h1;
// Q3. Compiler Default Assignment Operator kis type ki copy karta hai?

// 👉 Shallow Copy

// Q4. Assignment Operator ka return type kya hota hai?
// Hero& operator=(const Hero &obj)

// Reference return karta hai.

// Q5. Rule of Three (Most Important Interview Concept)

// Agar class dynamic memory (new) manage karti hai, to generally tumhe ye teen functions khud define karne chahiye:

// Destructor

// ~Hero()

// Copy Constructor

// Hero(const Hero &obj)

// Copy Assignment Operator

// Hero& operator=(const Hero &obj)

// Ye concept interviews me Rule of Three ke naam se bahut frequently puchha jata hai. (Modern C++ me iske extended versions Rule of Five aur Rule of Zero bhi hote hain.)