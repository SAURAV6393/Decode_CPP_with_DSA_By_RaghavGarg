 #include <iostream>
#include <string> // Required for using string
using namespace std;

class player {
  public:  
    string name;
    int score;
    int health;
};

int main() {
    player a;
    a.score = 89;
    a.health = 67;
    a.name = "saurav";

    cout << a.name << endl;
    cout << a.score << endl;
    cout << a.health << endl;

    return 0;
}
