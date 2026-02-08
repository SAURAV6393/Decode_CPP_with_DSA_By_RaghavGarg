/*
CONCEPT: Range Checking using AND operator (&&)
LOGIC: Number is 3-digit if it's between 100 and 999 (inclusive)
OPERATOR: && (AND) - Both conditions must be true
RANGE: Minimum 100, Maximum 999
*/
#include<iostream>  //saurav 
using namespace std;
int main (){
    int x;
    cout<<"Enter positive integer : ";
    cin>>x;
    if(x<=999 && x>=100)                // Both conditions must be true
    cout<<"Three digit positive integer: "<<x;
    else
    cout<<"NOT ! Three digit positive integer: "<<x;


}