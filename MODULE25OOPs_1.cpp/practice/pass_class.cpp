#include<iostream>
using namespace std;

class Player {
private:
    int age;
    int score;
    bool alive;
    int health;

public:
    void setHealth(int health) {
        this->health = health;
    }
    void setScore(int score) {
        this->score = score;
    }
    void setalive(bool alive) {
        this->alive = alive;
    }
    void setAge(int age) {
        this->age = age;
    }

    int getHealth() {
        return health;
    }
    int getScore() {
        return score;
    }
    bool getalive() {
        return alive;
    }
    int getAge() {
        return age;
    }

    static Player getMaxScorePlayer(Player a, Player b) {
        if (a.getScore() < b.getScore())
            return b;
        else
            return a;
    }
};

int main()
{
    Player saurav, gaurav;
    saurav.setAge(18);
    saurav.setalive(true);
    saurav.setHealth(45);
    saurav.setScore(78);

    gaurav.setAge(20);
    gaurav.setalive(true);
    gaurav.setHealth(65);
    gaurav.setScore(98);

    Player anuj = Player::getMaxScorePlayer(saurav, gaurav);

    cout << "Max scorer's age: " << anuj.getAge() << endl;
    cout << "Max scorer's score: " << anuj.getScore() << endl;
}
