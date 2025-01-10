#include<iostream>
using namespace std;
int main ()
{
  int a ;
  int t , power = 1;
  cout<<"Enter a number :  ";
  cin>>a;
  cout<<"Enter the power  :  ";
  cin>>t;
  for(int i = 1 ; i <= t ; i++)
  {
    power *= a;
  }
cout<<power;

}