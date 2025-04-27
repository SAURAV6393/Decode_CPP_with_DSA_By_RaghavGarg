#include<iostream>
using namespace std;

class Player {
public:
    int score;
    int health;
};

int main() {
    Player saurav, gaurav, anuj;

    saurav.score = 23;
    saurav.health = 34;

    gaurav.score = 43;
    gaurav.health = 4;

    anuj.score = 93;
    anuj.health = 24;

    cout << saurav.score << endl;
    cout << gaurav.score << endl;
    cout << anuj.score << endl;

    return 0;
}
