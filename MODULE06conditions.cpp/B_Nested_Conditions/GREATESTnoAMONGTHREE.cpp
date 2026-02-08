/*
CONCEPT: Nested If-Else with AND operator (&&)
LOGIC: Find the greatest among three numbers using multiple conditions
OPERATOR: && (AND) - All conditions must be true
STRUCTURE: if-else if-else (more than 2 options)
*/
#include<iostream>
using namespace std;
 int main ()
 {
    int x,y,z;
    cout<<"Enter three number  : ";
    cin>>x>>y>>z;
    if(x>y && x>z)                      // If x is greater than BOTH y and z
    cout<<"Greatest number is "<<x;
    else if(z>y && z>x)                 // Else if z is greater than BOTH y and x
    cout<<"Greatest number is "<<z;
    else                                // Otherwise y is greatest
    cout<<"Greatest number is "<<y;

 }