/*
CONCEPT: Nested If-Else with Multiple Outcomes
LOGIC: Calculate profit or loss based on Cost Price (CP) and Selling Price (SP)
FORMULAS:
- PROFIT = SP - CP (when SP > CP)
- LOSS = CP - SP (when CP > SP)
- NO PROFIT NO LOSS (when SP = CP)
STRUCTURE: Three possible outcomes
*/
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
    if(SP - CP>0)                       // If difference is positive → PROFIT
    cout<<" PROFIT is "<<SP - CP;
    else if(SP == CP)                   // If both are equal → NO PROFIT NO LOSS
    cout<<"NO PROFIT AND NO LOSS";
    else                                // If SP < CP → LOSS
    cout<<"LOSS is"<<CP - SP;


}