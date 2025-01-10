#include<iostream>
using namespace std;
void gcd(int x , int y)
{ int hcf = 1;
    for(int i = 1; i<min(x,y) ; i++)
    {
        if(x%i==0 && y%i==0)
        {
            hcf = i;
        }
    }
    cout<<hcf;
}
int main()
{
    int a ,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    gcd( a,b);
}
