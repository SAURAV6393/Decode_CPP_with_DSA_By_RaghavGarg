#include<iostream>
using namespace std;
int main ()
{
    float SP;
    cout<<"Enter a SP: ";
    cin>>SP;
    float CP;
    cout<<"Enter a CP: ";
    cin>>CP;
    if(SP - CP>0)
    cout<<" PROFIT is "<<SP - CP;
    else if(SP = CP)
    cout<<"NO PROFIT AND NO LOSS";
    else
    cout<<"LOSS is"<<CP - SP;


}