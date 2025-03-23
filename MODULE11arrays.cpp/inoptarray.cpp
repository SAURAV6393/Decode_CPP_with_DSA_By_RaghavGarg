#include<iostream>
using namespace std;
int main ()
{
    int a[5];
    cout<<"Enter the input in array : ";
    for(int i = 0 ; i<5 ; i++)
    {
        cin>>a[i];
    }
    cout<<"Shoe the output in array : ";
    for(int i = 4 ; i>=0 ; i--)
    {
        cout<<a[i]<<" ";
    }
}