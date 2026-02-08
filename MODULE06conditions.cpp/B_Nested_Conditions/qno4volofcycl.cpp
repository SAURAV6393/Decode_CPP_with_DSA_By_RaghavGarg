/*
CONCEPT: Mathematical Calculation with User Input
FORMULA: Volume of Cylinder = π × r² × h
WHERE:
- π (pi) = 3.14159... (approximated as 3.14)
- r = radius of cylinder base
- h = height of cylinder
- r² = r * r (radius squared)
*/
#include<iostream>
using namespace std;
int main ()
{
    float pi = 3.14;                   // Approximation of pi
    float r, h, VOC;                   // r=radius, h=height, VOC=Volume of Cylinder
    cout<<"Enter a radius : ";
    cin>>r;
    cout<<"Enter a height : ";
    cin>>h;
    VOC = pi * r * r * h;              // Calculate volume using formula
    cout<<"Volume of cylinder : ";
    cout<<VOC;

}