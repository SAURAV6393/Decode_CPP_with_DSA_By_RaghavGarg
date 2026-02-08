/*
CONCEPT: Simple For Loop - Repeat Code n Times
LOOP TYPE: For loop (for known iterations)
LOGIC: Execute code block exactly n times
OPERATORS USED: i++ (increment), <= (comparison)
*/
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter times of print : ";
    cin>>n;
    
    // For loop: Initialize i=1, run while i<=n, increment i each time
    for(int i = 1; i<=n; i++)      // Loop runs n times (i: 1→2→3→...→n)
    {
        cout<<"HELLO WORLD ! "<<endl;  // Executes n times
    }
    cout<<"BYE BYE !!";
}