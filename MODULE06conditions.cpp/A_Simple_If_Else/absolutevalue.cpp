/*
CONCEPT: Simple If-Else with Built-in Functions
LOGIC: Absolute value removes the negative sign (always positive)
USE CASE: Can use if-else OR built-in abs() function
METHOD 1: if(x<0) cout<<-x; else cout<<x;
METHOD 2: cout<<abs(x); (cleaner approach used here)
*/
#include<iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    // METHOD 1: Using if-else
    // if(x<0)
    // cout<<"ABSOLUTE VALUE IS "<<-x;
    // else
    // cout<<"ABSOLUTE VALUE IS "<<x;
    
    // METHOD 2: Using built-in abs() function
     cout<<"ABSOLUTE VALUE IS "<<abs(x);
}