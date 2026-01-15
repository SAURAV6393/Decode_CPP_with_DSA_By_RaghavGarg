#include<iostream>
using namespace std;
int main ()
{
    int x = 5;

    int*p = &x;
    // cout<<&p<<endl<<&x;
    *p = 67;
    cout<<*p;
    cout<<endl<<x;
    return 0;
}