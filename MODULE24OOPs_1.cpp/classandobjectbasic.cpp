#include <iostream>
using namespace std;

class Player {
public:
    int score;  // Data members
    int health;

    // Member function to display health
    void showHealth() {
        cout << "Health is: " << health << endl;
    }

    // Member function to display score
    void showScore() {
        cout << "Score is: " << score << endl;
    }
};

int main() {
    cout << "SAURAV RAJPUT" << endl;

    // Creating a Player object
    Player saurav;
    saurav.score = 57;
    saurav.health = 98;

    // Displaying Player attributes
    cout << "Player's Initial Attributes:" << endl;
    cout << "Score: " << saurav.score << endl;
    cout << "Health: " << saurav.health << endl;

    // Using member functions to display attributes
    cout << "\nUsing Member Functions:" << endl;
    saurav.showHealth();
    saurav.showScore();

    return 0;
}






// #include<iostream>
// using namespace std;

// class Player{
//     public:
//     int score; // data members 
//     int health;

//     void showHealth(){   // member function
//         cout<<"Health is : "<<health;
//     }

//     void showScore(){
//         cout<<endl<<"Score is "<<score;
//     }
// };


// int main(){
//     // // ignore these lines
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
//     // #endif
//    cout<<"SAURAV RAJPUT"<<endl;
//     int a = 10 ; // variable 
//     Player saurav ; // abb yeh variable nhi actually yeh object hai
//     saurav.score = 57;
//     saurav.health = 98;
//     cout<<saurav.score<<endl;
//     cout<<saurav.health<<endl;

//     saurav.showHealth();
//     saurav.showScore();
// }