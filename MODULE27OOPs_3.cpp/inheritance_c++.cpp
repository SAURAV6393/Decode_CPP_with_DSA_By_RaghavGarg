#include<iostream>
#include<string>
using namespace std;

class Vehicle{
public:    
    int tyreSize;
    int cost;
    int engineSize;
};

class Bike : public Vehicle{
public: 
    int handleSize;
    Bike(){
        cout<<"Bike constructor called"<<endl;
        cout<<"Tyre Size: "<<tyreSize<<endl;
    }
};

class  Car : public Vehicle{
public:     
    int SteeringSize;
};

int main(){
    Bike honda;
    honda.handleSize = 4;
    honda.cost = 45000;
    honda.engineSize  = 40;
    honda.tyreSize = 5;

    cout<<honda.handleSize<<endl<<honda.cost;
    cout<<endl<<honda.engineSize<<endl<<honda.tyreSize;
}



// #include <iostream>
// #include <string>
// using namespace std;

// class Vehicle {
// protected:
//     int tyreSize;
//     int cost;
//     int engineSize;
// public:
//     Vehicle(int tSize, int c, int eSize) {
//         tyreSize = tSize;
//         cost = c;
//         engineSize = eSize;
//     }
//     void displayVehicleInfo() {
//         cout << "Tyre Size: " << tyreSize << endl;
//         cout << "Cost: " << cost << endl;
//         cout << "Engine Size: " << engineSize << endl;
//     }
// };

// class Bike : public Vehicle {
//     int handleSize;
// public:
//     Bike(int hSize, int tSize, int c, int eSize) : Vehicle(tSize, c, eSize) {
//         handleSize = hSize;
//     }
//     void display() {
//         cout << "Bike Details:" << endl;
//         cout << "Handle Size: " << handleSize << endl;
//         displayVehicleInfo();
//     }
// };

// class Car : public Vehicle {
//     int steeringSize;
// public:
//     Car(int sSize, int tSize, int c, int eSize) : Vehicle(tSize, c, eSize) {
//         steeringSize = sSize;
//     }
//     void display() {
//         cout << "Car Details:" << endl;
//         cout << "Steering Size: " << steeringSize << endl;
//         displayVehicleInfo();
//     }
// };

// int main() {
//     Bike honda(4, 5, 45000, 40);
//     honda.display();

//     cout << endl;

//     Car toyota(8, 7, 800000, 120);
//     toyota.display();

//     return 0;
// }
