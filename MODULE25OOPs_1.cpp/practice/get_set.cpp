#include<iostream>
using namespace std;

class Player {
private:
    int score;
    int health;

public:
    void setScore(int s) {
        score = s;
    }
    void setHealth(int h) {
        health = h;
    }
    int getScore() {
        return score;
    }
    int getHealth() {
        return health;
    }
};

int main() {
    Player saurav;
    saurav.setScore(56);
    saurav.setHealth(96);
    cout << saurav.getHealth() << endl;
    cout << saurav.getScore() << endl;
}
