/*
CONCEPT: Character Type Checking using Built-in Functions
FUNCTIONS:
- isalpha(ch)   → Returns 1 (true) if alphabetic, 0 (false) otherwise
- isdigit(ch)   → Returns 1 if digit, 0 otherwise
- isspace(ch)   → Returns 1 if space character, 0 otherwise
LOGIC: Check what type of character was inputted
*/
#include<iostream>  
using namespace std;
int main (){
    char ch;
    cout<<"Enter character : ";
    cin>>ch;
    cout<<isalpha(ch);   // Output: 1 if letter, 0 if not
  
}