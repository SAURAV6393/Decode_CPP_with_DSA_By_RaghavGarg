#include<iostream>
using namespace std;

class Player{
    public: 
    int score;
    int health;
    
    void showScore(){
        cout<<"Score is "<<score<<endl;
    }
    void showHealth(){
        cout<<"Health is "<<health<<endl;
    }
};
int main(){
    Player amit;
    amit.score = 45;
    amit.health = 67;

    amit.showHealth();
    amit.showScore();
}