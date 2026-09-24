#include<iostream>
using namespace std;

class Hero{

private:

    int *health;

public:

    Hero(){

        health = new int;

        *health = 100;

    }

    void print(){

        cout<<*health<<endl;

    }

};

int main(){

    Hero h;

    h.print();

}

// Important

// C++ me officially Dynamic Constructor naam ka koi constructor type nahi hota.

// Ye sirf educational term hai.

// Matlab constructor ke andar dynamic memory allocate karna.

// Memory heap me allocate hui.