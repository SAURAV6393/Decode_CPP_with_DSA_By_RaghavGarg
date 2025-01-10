#include<iostream>
using namespace std;
 int main ()
 {
    int x,y,z;
    cout<<"Enter three number  : ";
    cin>>x>>y>>z;
    if(x>y && x>x)
    cout<<"Greatest number is "<<x;
    else if(z>y && z>x)
    cout<<"Greatest number is "<<z;
    else 
    cout<<"Greatest number is "<<y;

 }