#include <iostream>
#include <cstring>
using namespace std;

class Hero{
private:
    int health;

public:
    char *name;

    Hero(){
        cout<<"Constructor Called"<<endl;
        name = new char[100];
    }

    void setHealth(int h){
        health = h;
    }

    void setName(const char n[]){
        strcpy(name,n);
    }

    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Health : "<<health<<endl;
        cout<<"Address : "<<(void*)name<<endl;
        cout<<endl;
    }
};

int main(){

    Hero hero1;

    hero1.setHealth(100);
    hero1.setName("Babbar");

    cout<<"Before Copy\n";
    hero1.print();

    // Compiler Generated Copy Constructor
    Hero hero2(hero1);

    cout<<"After Copy\n";
    hero2.print();

    cout<<"Changing hero1 name...\n";

    hero1.name[0]='G';

    hero1.print();
    hero2.print(); // isme kyu change hua tabhi shallow copy use hua hai

}

//  Memory Diagram
// Before Copy

// hero1
// +---------+
// | health  |
// | name ----+-------> "Babbar"
// +---------+

// After Shallow Copy

// hero1
// +---------+
// | health  |
// | name ----+
// +---------+ |
//             |
//             v
//          "Babbar"
//             ^
//             |
// +---------+ |
// | health  |
// | name ----+
// +---------+
// hero2

// Dono object same memory ko point kar rahe hain.

// Jab

// hero1.name[0]='G';

// Memory me

// Babbar

// change hokar

// Gabbar

// ho gayi.

// Hero2 bhi wahi address use kar raha tha.

// Isliye uska bhi output change ho gaya.

// Ye hi Shallow Copy hai.