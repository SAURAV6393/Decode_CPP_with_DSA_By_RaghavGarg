#include <iostream>
using namespace std;

class Player {
private:
    int score;   // data members
    int health;
    int age;
    bool alive;

public:
    // Constructors
    Player() : score(0), health(0), age(0), alive(false) {}
    Player(int s, int h, int a, bool al) : score(s), health(h), age(a), alive(al) {}

    // Getter methods
    int getHealth() { return health; }
    int getScore() { return score; }
    int getAge() { return age; }
    bool getAlive() { return alive; }

    // Setter methods
    void setHealth(int h) { this->health = h; }
    void setScore(int s) { this->score = s; }
    void setAge(int a) { this->age = a; }
    void setAlive(bool al) { this->alive = al; }
};

// Function to add scores of two players
int addScore(Player a, Player b) {
    return a.getScore() + b.getScore();
}

// Function to get the player with maximum score
Player getMaxScorePlayer(Player a, Player b) {
    if (a.getScore() > b.getScore())
        return a;
    else
        return b;
}

int main() {
    // Object creation - static allocation
    Player saurav;  
    Player gaurav;

    // Object creation - dynamic allocation
    Player *urvi = new Player();
    Player urviObject = *urvi; // dereference pointer to get object

    // Set and print urviObject data
    urviObject.setScore(324);
    cout << "\nUrviObject Score: " << urviObject.getScore() << endl;

    // Set and print saurav data
    saurav.setAge(29);
    saurav.setScore(97);
    saurav.setAlive(true);
    saurav.setHealth(87);

    cout << "\nPlayer Saurav:\n";
    cout << "Age is : " << saurav.getAge() << endl;
    cout << "Score is : " << saurav.getScore() << endl;
    cout << "Alive is : " << saurav.getAlive() << endl;
    cout << "Health is : " << saurav.getHealth() << endl;

    // Set and print gaurav data
    gaurav.setAge(79);
    gaurav.setScore(99);
    gaurav.setAlive(false);
    gaurav.setHealth(76);

    cout << "\nPlayer Gaurav:\n";
    cout << "Age is : " << gaurav.getAge() << endl;
    cout << "Score is : " << gaurav.getScore() << endl;
    cout << "Alive is : " << gaurav.getAlive() << endl;
    cout << "Health is : " << gaurav.getHealth() << endl;

    // Function calls
    cout << "\nPass objects to Function:\n";
    cout << "Sum of Scores: " << addScore(saurav, gaurav) << endl;

    Player raghav = getMaxScorePlayer(saurav, gaurav);
    cout << "Max Score Player has Score: " << raghav.getScore() << endl;

    // Free dynamically allocated memory
    delete urvi;

    return 0;
}
















// #include <iostream>
// using namespace std;

// class Player {
// private:
//     int score;   // data members
//     int health;
//     int age;
//     bool alive;

// public:
//     // Constructor
//     Player() : score(0), health(0), age(0), alive(false) {}
//     Player(int s, int h, int a, bool al) : score(s), health(h), age(a), alive(al) {}

//     // Getter methods
//     int getHealth() {    // member function 
//         return health;
//     }
//     int getScore() {
//         return score;
//     }
//     int getAge() {
//         return age;
//     }
//     bool getAlive() {
//         return alive;
//     }
//     // Setter methods
//     void setHealth(int h) {    // member function 
//         this->health = h;
//     }
//     void setScore(int s) {
//         this->score = s;
//     }
//     void setAge(int a) {
//         this->age = a;
//     }
//     void setAlive(bool al) {
//         this->alive = al;
//     }

// Player getMaxScorePlayer(Player a , Player b ){
//     if(a > b) return a;
//     else return b;
// }
// };

// int addScore(Player a, Player b) {
//     return a.getScore() + b.getScore(); // Add parentheses for method calls
// }
// int getMaxScorePlayer(Player a , Player b ){
//     Player *urvi = new Player(); // runtime, dynamic allocation and pointer to object
//     Player urviObject = *urvi;
// }

// int main() {
//     Player saurav;  // object creation, statically ,compile static allocatiom
//     Player urviObject;
//     Player gaurav;  // object creation, statically , compile static allocatiom

//     Player *urvi = new Player // run ti,e , dynamic allocation and pointer to obect hai
//     Player urviObject  = *urvi ;

//     urviObject.setScore(324);
//     cout<<urviObject.getScore();

//     saurav.setAge(29);
//     saurav.setScore(97);
//     saurav.setAlive(true);
//     saurav.setHealth(87);

//     cout << "Player Saurav  : \n";
//     cout << "Age is : " << saurav.getAge() << endl;
//     cout << "Score is : " << saurav.getScore() << endl;
//     cout << "Alive is : " << saurav.getAlive() << endl;
//     cout << "Health is : " << saurav.getHealth() << endl;

//     Player gaurav;  // object creation, statically
//     gaurav.setAge(79);
//     gaurav.setScore(99);
//     gaurav.setAlive(false);
//     gaurav.setHealth(76);

//     cout << "\n\nPlayer Gaurav  : \n";
//     cout << "Age is : " << gaurav.getAge() << endl;
//     cout << "Score is : " << gaurav.getScore() << endl;
//     cout << "Alive is : " << gaurav.getAlive() << endl;
//     cout << "Health is : " << gaurav.getHealth() << endl;

//     cout << "\nPass objects to Function: \n";
//     cout << addScore(saurav, gaurav); // Correctly call addScore
//     Player raghav = getMaxScorePlayer(saurav , gaurav );
//     cout<<raghav.getScore();
// }







