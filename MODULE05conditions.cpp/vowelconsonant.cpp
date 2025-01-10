#include<iostream>
using namespace std;
int main ()
{
    char x;
    cout<<"Enter a  lower character : ";
    cin>>x;
    if(x=='a' ||x=='e' ||x=='i' ||x=='o' ||x=='u' )
    cout<<x<<" is VOWEL !";
    else
    cout<<" CONSONANT ";
}