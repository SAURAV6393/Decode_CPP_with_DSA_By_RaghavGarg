#include<iostream>
using namespace std;

class A{
    public:
    string name;

    void display(){
        cout<<"A wali class hui hai "<<endl;
    }
};

class B{
    public:
    string name;

    void display(){
        cout<<"B wali class hui hai "<<endl;
    }
};


class C : public B , public A{
    public: 
            using A::display;


};

int main(){
     C c;
    //  c.A::display();  // method : 1 scope resolution 
     c.display(); // occur ambiguity so c.A::display();
     return 0;
}