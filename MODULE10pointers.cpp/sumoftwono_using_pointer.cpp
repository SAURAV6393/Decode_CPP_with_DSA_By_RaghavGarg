#include<iostream>
using namespace std;
int main(){
    int x , y;
    int *p = &x;
    int *q = &y;
    cout<<"Enter number : ";
    cin>>*p>>*q; // cin>>x>>y   Correct 
    cout<<x + *q; // *p + *q , x + *q , x + y , *p + y;  Correct
}