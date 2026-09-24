#include<iostream>
using namespace std;

class Animal{
    public:
       string name;
       int size ;
       string sound;

    public:
    void speak(){
        cout<<"Speaking : "<<endl;

    }   

};

class Dog : public Animal{

};

class Snake : public Dog{

};

class Rat : public Snake{

};

int main(){
    Rat r;
    r.name = "Elephant";
    r.size = 400;
    r.sound = "hi";
    r.speak();
}