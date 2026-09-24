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
        name=new char[100];
    }

    // Deep Copy Constructor
    Hero(Hero &temp){

        cout<<"Deep Copy Constructor Called"<<endl;

        health=temp.health;

        name=new char[strlen(temp.name)+1];

        strcpy(name,temp.name);
    }

    void setHealth(int h){
        health=h;
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

    ~Hero(){
        delete [] name;
    }

};

int main(){

    Hero hero1;

    hero1.setHealth(100);
    hero1.setName("Babbar");

    cout<<"Hero1\n";
    hero1.print();

    Hero hero2(hero1);

    cout<<"Hero2\n";
    hero2.print();

    hero1.name[0]='G';

    cout<<"After Modification\n";

    hero1.print();
    hero2.print();

}

// Memory Diagram
// hero1

// +---------+
// | health  |
// | name ----+-------> "Babbar"
// +---------+


// hero2

// +---------+
// | health  |
// | name ----+-------> "Babbar"
// +---------+

// Dono ki memory alag hai.

// Isliye

// hero1.name[0]='G';

// Sirf hero1 ki memory change karega.

//
// Shallow Copy vs Deep Copy
// Shallow Copy	Deep Copy
// Sirf pointer copy hota hai	Puri memory copy hoti hai
// Same address	Different address
// Ek object change → dusra bhi change	Independent objects
// Compiler generated	User-defined Copy Constructor
// Double delete ka risk	Safe
// Interview Questions ⭐
// Q1. Shallow Copy kya hoti hai?

// Pointer ka address copy hota hai. Dono objects same memory share karte hain.

// Q2. Deep Copy kya hoti hai?

// Nayi memory allocate karke usme data copy kiya jata hai.

// Q3. Compiler kis type ki copy karta hai?

// Shallow Copy

// Q4. Deep Copy kab likhte hain?

// Jab class me dynamic memory (new) use hoti hai.

// Q5. Deep Copy kaise banate hain?

// Custom Copy Constructor likhkar.

// Hero(Hero &temp)
// Q6. Destructor kyu zaruri hai?

// Dynamic memory (new) se allocate hui memory ko free (delete[]) karne ke liye. Agar destructor nahi likhoge to memory leak ho sakta hai.

// Q7. Shallow Copy ka sabse bada problem?

// Double Deletion (Double Free)

// Agar dono objects same pointer ko point karte hain aur destructor dono me delete[] karega, to pehla object memory free karega aur dusra already-freed memory ko dubara free karega. Ye undefined behavior hai aur program crash bhi ho sakta hai.