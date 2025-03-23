#include<iostream>
using namespace std;
int main()
{
    // Enter a number : -0889 
    // The number of digit is 3 
    int n,q;
    cout<<"Enter a number : ";
    cin>>n;
    int count_digit = 0;
    int sum_digit = 0;
    while(n!=0){
        q =n/10;      
        sum_digit += (n%10) ;   // sum of digit 
        n = q;
        count_digit++; 
    }
    cout<<"The number of digit is "<<count_digit;
    cout<<endl<<"The sum of digit is "<<sum_digit;
    return 0;
}