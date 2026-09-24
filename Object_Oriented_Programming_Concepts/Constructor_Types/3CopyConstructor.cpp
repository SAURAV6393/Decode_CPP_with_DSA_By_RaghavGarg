#include<iostream>
using namespace std;

class Hero{

private:

    int health;
    string name;

public:

    Hero(int health,string name){

        this->health = health;
        this->name = name;

    }

    Hero(Hero &temp){  // copy constructor  , pass by reference is must otherwise infinite loop will occur
 
        this->health = temp.health;
        this->name = temp.name;

    }

    void print(){

        cout<<name<<" "<<health<<endl;

    }

};

int main(){

    Hero S(75,"Saurav");

    Hero R(S);  // copy constructor

    R.print();

}

// Reference hi kyu?

// Ye interview ka favourite question hai.

// Galat

// Hero(Hero temp)

// Ye object pass karega.

// Object pass karne ke liye fir copy constructor chalega.

// Fir us copy constructor me fir object pass hoga.

// Fir copy constructor.

// Fir copy constructor.

// Infinite recursion.

// Isliye

// Hero(Hero &temp)

// Pass by reference mandatory hai.