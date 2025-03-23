#include <iostream>
using namespace std;

class Player {
private:
    int score;   // data members
    int health;
    int age;
    bool alive;

public:
    int getHealth() {    // member function 
        return health;
    }
    int getScore() {
        return score;
    }
    int getAge() {
        return age;
    }
    bool getAlive() {
        return alive;
    }

    void setHealth(int h) {    // member function 
        this->health = h;
    }
    void setScore(int s) {
        this->score = s;
    }
    void setAge(int a) {
        this->age = a;
    }
    void setAlive(bool al) {
        this->alive = al;
    }
};

int addScore(Player a, Player b) {
    return a.getScore() + b.getScore(); // Add parentheses for method calls
}
int getMaxScorePlayer(Player a , Player b ){
    if(a > b) return a;
    else return b;
}

int main() {
    Player saurav;  // object creation, statically ,compile static allocatiom
    Player urviObject;
    Player gaurav;  // object creation, statically , compile static allocatiom

    Player *urvi = new Player // run ti,e , dynamic allocation and pointer to obect hai
    Player urviObject  = *urvi ;

    urviObject.setScore(324);
    cout<<urviObject.getScore();

    saurav.setAge(29);
    saurav.setScore(97);
    saurav.setAlive(true);
    saurav.setHealth(87);

    // cout << "Player Saurav  : \n";
    // cout << "Age is : " << saurav.getAge() << endl;
    // cout << "Score is : " << saurav.getScore() << endl;
    // cout << "Alive is : " << saurav.getAlive() << endl;
    // cout << "Health is : " << saurav.getHealth() << endl;

   // Player gaurav;  // object creation, statically
    gaurav.setAge(79);
    gaurav.setScore(99);
    gaurav.setAlive(false);
    gaurav.setHealth(76);

    // cout << "\n\nPlayer Gaurav  : \n";
    // cout << "Age is : " << gaurav.getAge() << endl;
    // cout << "Score is : " << gaurav.getScore() << endl;
    // cout << "Alive is : " << gaurav.getAlive() << endl;
    // cout << "Health is : " << gaurav.getHealth() << endl;

    // cout << "\nPass objects to Function: \n";
    // cout << addScore(saurav, gaurav); // Correctly call addScore
    // Player raghav = getMaxScorePlayer(saurav , gaurav );
    // cout<<raghav.getScore();
}







