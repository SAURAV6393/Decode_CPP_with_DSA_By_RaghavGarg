#include <iostream>
using namespace std;

class Player {
private:
    int score;  // Private data members
    int health;

public:
    // Setter for health
    void setHealth(int h) {
        health = h;
    }
// efwef
    // Setter for score
    void setScore(int s) {
        score = s;
    }

    // Getter for health
    int getHealth() {
        return health;
    }

    // Getter for score
    int getScore() {
        return score;
    }
};

int main() {
    cout << "SAURAV RAJPUT" << endl;

    // Creating a Player object
    Player saurav;

    // Setting and displaying health
    saurav.setHealth(10);
    cout << "Player's Health: " << saurav.getHealth() << endl;

    // Setting and displaying score
    saurav.setScore(89);
    cout << "Player's Score: " << saurav.getScore() << endl;

    return 0;
}










// #include<iostream>
// using namespace std;

// class Player{
//     private:
//     int score; // data members 
//     int health;

//     public:
//     // setter
//     void setHealth(int h){   // member function
//         health = h;
//     }

//     void setScore(int s){
//         score = s;
//     }
//     // getter
//     int getHealth(){
//         return health;
//     }
//     int getScore(){
//         return score;
//     }
// };


// int main(){
    
//    cout<<"SAURAV RAJPUT"<<endl;
//     int a = 10 ; // variable 
//     Player saurav ; // abb yeh variable nhi actually yeh object hai

//     saurav.setHealth(10);
//     cout<<saurav.getHealth()<<endl;
//     saurav.setScore(89);
//     cout<<saurav.getScore()<<endl;
// }