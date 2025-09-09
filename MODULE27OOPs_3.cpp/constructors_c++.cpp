#include <iostream>
#include <string>
using namespace std;

class Bike {
public:
    string name;
    int prize;
    string colour;

    // Parameterized constructor
    Bike(int prize) {
        this->prize = prize;
        cout << "Constructor call hua" << endl;
    }

    // Default constructor
    Bike() {
        cout << "Default constructor call hua" << endl;
    }
};

int main() {
    Bike tvs(23); // constructor with prize argument
    // Bike shine;   // default constructor

    tvs.name = "Honda";
    tvs.prize = 78009;  // updating prize
    tvs.colour = "red";

    // cout << tvs.name << endl << tvs.prize << endl << tvs.colour << endl;
    Bike Hero;
    Hero.name = "Hero Honda";
    Hero.prize = 344214;
    Hero.colour = "Black";
    cout<< "Bike name : " <<Hero.name<<endl <<"Bike prize :"<< Hero.prize<<endl<<"Bike colour :"<< Hero.colour;
}
