/*
CONCEPT: Loop Through Character Ranges using ASCII Values
LOGIC: ASCII 65-90 represent uppercase letters A-Z
TYPE CASTING: (char) converts integer to character
USE: Demonstrate character loops and ASCII values
*/
#include<iostream>
using namespace std ;
int main ()
{
    // Loop from ASCII 65 (A) to 90 (Z)
    for(int i = 65 ; i<=90 ; i++)       // i: A(65)→B(66)→...→Z(90)
    {
        cout<<(char)i<<" "<<i<<endl;   // Print character and its ASCII value
        // (char)i converts integer to character
        // Example: 65 becomes 'A', 66 becomes 'B', etc.
    }
    // Output: A 65
    //         B 66
    //         ... up to Z 90
}