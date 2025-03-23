#include <iostream>
#include <string>
using namespace std;

class Weapon {
public:
    string name;
    int ammo;
    string scope;

    void setWeapon(const string& weaponName = "None", int ammoCount = 0, const string& scopeType = "None") {
        name = weaponName;
        ammo = ammoCount;
        scope = scopeType;
    }

    void display() const {
        cout << "Weapon: " << name << "\nAmmo: " << ammo << "\nScope: " << scope << endl;
    }
};

class Player {
public:
    string name;
    int health;
    Weapon weapon;

    void setPlayer(const string& playerName = "Unknown", int playerHealth = 100, const Weapon& playerWeapon = Weapon()) {
        name = playerName;
        health = playerHealth;
        weapon = playerWeapon;
    }

    void display() const {
        cout << "Player: " << name << "\nHealth: " << health << endl;
        weapon.display();
    }
};

int main() {
    // Create a Weapon object and set its properties
    Weapon ak47;
    ak47.setWeapon("AK-47", 30, "4x Scope");

    // Create a Player object and set its properties
    Player player;
    player.setPlayer("ProGamer", 100, ak47);

    // Display player and weapon details
    cout << "\nGame Started!" << endl;
    player.display();

    return 0;
}
