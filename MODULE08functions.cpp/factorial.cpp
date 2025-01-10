#include<iostream>
using namespace std;
int main()
{
    int n;
    int fact = 1;;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = n ; i > 0 ; i--)
    {
        fact *= i;
    }
    cout<<fact;
}