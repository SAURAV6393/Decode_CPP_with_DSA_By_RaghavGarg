/*
CONCEPT: OR operator (||) for multiple conditions
LOGIC: If character is one of the 5 vowels → VOWEL, else → CONSONANT
OPERATOR: || (OR) - True if ANY ONE condition is true
ADVANTAGE: Checks multiple values without nesting if-else
*/
#include<iostream>
using namespace std;
int main ()
{
    char x;
    cout<<"Enter a  lower character : ";
    cin>>x;
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' )  // OR operator checks multiple conditions
    cout<<x<<" is VOWEL !";
    else
    cout<<" CONSONANT ";
}