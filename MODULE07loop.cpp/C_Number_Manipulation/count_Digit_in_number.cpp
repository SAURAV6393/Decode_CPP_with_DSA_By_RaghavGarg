/*
CONCEPT: Count Digits and Sum Digits of a Number
LOGIC: Extract each digit using % (modulus) and / (division)
EXAMPLE: Input 1234 → Digits: 4,3,2,1 → Count=4, Sum=10
OPERATORS: n%10 (last digit), n/10 (remove last digit)
COMPLEXITY: O(log n) - proportional to number of digits
*/
#include<iostream>
using namespace std;
int main()
{
    int n,q;
    cout<<"Enter a number : ";
    cin>>n;
    
    int count_digit = 0;            // Counter for digit count
    int sum_digit = 0;              // Accumulator for digit sum
    
    // Extract and process each digit
    while(n != 0)                   // Continue until all digits processed
    {
        q = n / 10;                 // Remove last digit for next iteration
        sum_digit += (n % 10);      // Extract last digit and add to sum
        n = q;                      // Update n for next iteration
        count_digit++;              // Increment digit count
        // Example iteration: n=1234 → digit=4 → sum=4 → count=1 → n=123
    }
    
    cout<<"The number of digit is "<<count_digit;    // Output count
    cout<<endl<<"The sum of digit is "<<sum_digit;   // Output sum
    return 0;
}