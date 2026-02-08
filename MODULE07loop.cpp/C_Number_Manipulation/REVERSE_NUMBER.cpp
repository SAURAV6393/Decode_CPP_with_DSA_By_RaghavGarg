/*
CONCEPT: Reverse Digits of a Number
FORMULA: 
  1. Extract last digit: last = n % 10
  2. Shift reverse left: reverse = reverse * 10
  3. Append digit: reverse = reverse + last
  4. Remove digit: n = n / 10
EXAMPLE: Input 1234 → Output 4321
COMPLEXITY: O(log n) - proportional to digit count
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int last_digit = 0;             // Variable to hold extracted digit
    int reverse = 0;                // Accumulator for reversed number
    
    // Extract and rebuild in reverse order
    while(n > 0)                    // Continue until all digits processed
    {
        last_digit = n % 10;        // Extract last digit
        reverse *= 10;              // Shift reverse left (make room for new digit)
        reverse += last_digit;      // Append extracted digit
        n /= 10;                    // Remove last digit from original
        // Example: n=1234 → digit=4 → rev=4 → n=123
        //          n=123 → digit=3 → rev=43 → n=12
        //          n=12 → digit=2 → rev=432 → n=1
        //          n=1 → digit=1 → rev=4321 → n=0
    }
    cout<<reverse;                  // Output reversed number
}