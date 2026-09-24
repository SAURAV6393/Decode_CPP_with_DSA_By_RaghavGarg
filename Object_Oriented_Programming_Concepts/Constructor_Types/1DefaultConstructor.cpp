#include<iostream>
using namespace std;

class Hero{
private:
    int health;
    string name;

public:

    Hero(){
        cout<<"Default Constructor Called"<<endl;
        health = 0;
        name = "Unknown";
    }

    void print(){
        cout<<name<<" "<<health<<endl;
    }
};

int main(){

    Hero h1;

    h1.print();

}


// Important Interview Point

// Agar tum koi bhi constructor nahi likhte, compiler khud ek Default Constructor bana deta hai.

// class Hero{

// };

// Ye valid hai.

// Lekin agar tum ek bhi constructor khud bana doge

// Hero(int x){

// }

// to compiler wala default constructor remove ho jata hai.

// Ab

// Hero h;

// Error dega.

// Ye bahut famous interview question hai.