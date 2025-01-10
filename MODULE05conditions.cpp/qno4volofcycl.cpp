#include<iostream>
using namespace std;
int main ()
{
    float pi = 3.14;
    float r, h, VOC;
    cout<<"Enter a radius : ";
    cin>>r;
    cout<<"Enter a height : ";
    cin>>h;
    VOC = pi * r *r *  h;
    cout<<"Volume of cylinder : ";
    cout<<VOC;

}