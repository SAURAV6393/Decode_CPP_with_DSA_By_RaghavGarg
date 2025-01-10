#include<iostream>
using namespace std;
int sum(int x, int y)
{
    int add = x + y;
    return add;
}
 int main()
 {
    int a, b;
    cout<<"Enter a value of a and b : ";
    cin>>a>>b;
    cout<<sum(a,b);
 }