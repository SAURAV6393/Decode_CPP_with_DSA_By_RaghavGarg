#include <iostream>
using namespace std;

class Hero {
private:
    int health;
public:    
    string name;

    // agar khud se constructor define kr diya toh default constructor kaam nhi karega. 
    // Types of constructor
    // 1. Default Constructor
    // 2. Parametized Constructor
    // 3. Copy Constructor
    // 4. Dynamic Constructor
    // 5. Static Constructor
    // 6. Private Constructor
    // 7. Destructor
    Hero() {
       cout<<"Constructor called"<<endl;
    }

    // Parametized Constructor
    Hero(int health , string name) { 
        this->name = name;
        this->health = health;
    }

    Hero (Hero &temp) {  // copy constructor  , pass by reference is must otherwise infinite loop will occur
        this->name = temp.name;
        this->health = temp.health;
    }

    void print(){
        cout<<"Name is : "<<this->name<<endl;   // this show current object 
        cout<<"Health is : "<<this->health<<endl;
    }

    int getHealth() {
        return health;
    }

    string getName() {
        return name;
    }

    void setHealth(int health) {
        this->health = health;
    }

    void setName(string name) {
        this->name = name;
    }
};

int main() {

    Hero S(75 , "Saurav");
    S.print();

    // copy constructor
    Hero R(S);
    R.print();

    return 0;
}