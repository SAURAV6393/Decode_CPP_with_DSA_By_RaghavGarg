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

int main(){
    Dog d;
    d.name = "Elephant";
    d.size = 400;
    d.sound = "hi";
    d.speak();
}