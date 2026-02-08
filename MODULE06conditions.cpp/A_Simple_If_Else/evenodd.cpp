/*
CONCEPT: Simple If-Else Statement - Check Even or Odd
LOGIC: If number is divisible by 2 (remainder = 0) → EVEN, else → ODD
OPERATOR USED: Modulus (%) to find remainder after division
*/
#include<iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if(x%2==0)      // If remainder is 0 when divided by 2
    cout<<" EVEN ";
    else            // Otherwise
    cout<<" ODD ";
}