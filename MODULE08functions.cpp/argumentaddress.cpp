#include<iostream>
using namespace std;
void pta (int x,int y)
{
   cout<<endl<<"Value and Address: ";
   cout<<endl<<x<<" "<<&x;
   cout<<endl<<y<<" "<<&y;
}
int main()
{
    int a , b;
    cin>>a>>b;
   cout<<"Value and Address: ";
   cout<<endl<<a<<" "<<&a;
   cout<<endl<<b<<" "<<&b; 
   pta(a,b); 
}
