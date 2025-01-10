#include<iostream>
using namespace std;
void fun(int n)
{   
    for( int i =1 ; i< n ; i++)
    {cout<<" BYE";}
    cout<<endl;
}
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    fun(x);
    fun(x);


}