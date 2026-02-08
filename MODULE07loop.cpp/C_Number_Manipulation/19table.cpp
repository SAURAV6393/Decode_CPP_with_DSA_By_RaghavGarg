/*
CONCEPT: Multiplication Table Generation
LOGIC: Print n × 1, n × 2, ..., n × 10
FORMULA: table[i] = n × i where i goes from 1 to 10
USE: Quick reference, learning multiplication
EXAMPLE: Input 5 → Output 5,10,15,20,25,30,35,40,45,50
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the table which you want : ";
    cin>>n;
    
    // Generate 10 multiples of input number
    for(int i=1; i<=10; i++)        // i: 1→2→3→...→10
    {
        cout<<n*i<<endl;            // Print n×i
        // Example: n=5 → prints 5, 10, 15, 20, 25, 30, 35, 40, 45, 50
    }
    cout<<"BYE BYE !";

}