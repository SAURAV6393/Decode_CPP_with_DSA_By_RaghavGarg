#include<iostream>
using namespace std;

class Hero{

private:
    int health;
    string name;

public:

    Hero(int health,string name){

        this->health = health; // Current object ka health = Parameter wala health
        this->name = name;

    }

    void print(){

        cout<<name<<" "<<health<<endl;

    }

};

int main(){

    Hero h1(90,"Saurav");

    h1.print();

}