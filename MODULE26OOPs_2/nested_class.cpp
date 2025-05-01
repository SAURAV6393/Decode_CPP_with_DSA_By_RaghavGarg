#include <iostream>
#include <string>
using namespace std;

class Gun {
private:
    string name;
    int damage;
    int ammo;
    string scope;

public:
    Gun(string name = "Pistol", int damage = 10, int ammo = 30, string scope = "Iron Sight") {
        this->name = name;
        this->damage = damage;
        this->ammo = ammo;
        this->scope = scope;
    }

    void setGun(string name, int damage, int ammo, string scope) {
        this->name = name;
        this->damage = damage;
        this->ammo = ammo;
        this->scope = scope;
    }

    string getName() const {
        return name;
    }

    int getDamage() const {
        return damage;
    }

    int getAmmo() const {
        return ammo;
    }

    string getScope() const {
        return scope;
    }

    void displayGunInfo() const {
        cout << "Gun: " << name << "\n";
        cout << "  Damage: " << damage << "\n";
        cout << "  Ammo: " << ammo << "\n";
        cout << "  Scope: " << scope << "\n";
    }
};

class Player {
private:
    int* health;
    int score;
    bool alive;
    int age;
    Gun gun;

public:
    Player() {
        health = new int(100);  // default health
        score = 0;
        alive = true;
        age = 0;
    }

    ~Player() {
        delete health;
    }

    void setHealth(int h) {
        *health = h;
    }

    void setScore(int score) {
        this->score = score;
    }

    void setAlive(bool alive) {
        this->alive = alive;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setGun(string name, int damage, int ammo, string scope) {
        gun.setGun(name, damage, ammo, scope);
    }

    int getHealth() const {
        return *health;
    }

    int getScore() const {
        return score;
    }

    bool isAlive() const {
        return alive;
    }

    int getAge() const {
        return age;
    }

    Gun getGun() const {
        return gun;
    }

    static Player getMaxScorePlayer(const Player& a, const Player& b) {
        return (a.score > b.score) ? a : b;
    }

    void displayInfo() const {
        cout << "Age: " << age << "\n";
        cout << "Alive: " << (alive ? "Yes" : "No") << "\n";
        cout << "Health: " << *health << "\n";
        cout << "Score: " << score << "\n";
        gun.displayGunInfo();
    }
};

int main() {
    Player saurav, gaurav;

    saurav.setAge(18);
    saurav.setAlive(true);
    saurav.setHealth(45);
    saurav.setScore(78);
    saurav.setGun("AKM", 47, 30, "Red Dot");

    gaurav.setAge(20);
    gaurav.setAlive(true);
    gaurav.setHealth(65);
    gaurav.setScore(98);
    gaurav.setGun("M416", 43, 40, "6x Scope");

    Player winner = Player::getMaxScorePlayer(saurav, gaurav);

    cout << "\nMax Scorer Player Info:\n";
    winner.displayInfo();

    return 0;
}
