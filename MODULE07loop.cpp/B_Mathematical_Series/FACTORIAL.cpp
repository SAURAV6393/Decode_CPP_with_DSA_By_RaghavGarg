/*
CONCEPT: Factorial Calculation using Loop
FORMULA: n! = 1 × 2 × 3 × ... × n
EXAMPLE: 5! = 1 × 2 × 3 × 4 × 5 = 120
PATTERN: Multiply accumulator by each number from 1 to n
COMPLEXITY: O(n) time, O(1) space
*/
#include<iostream>
using namespace std;;
int main ()
{
    int n ;
    int sum = 1;        // Accumulator initialized to 1 (identity for multiplication)
    cout<<"Enter the number : ";
    cin>>n;
    
    // Multiply all numbers from 1 to n
    for(int i = 1; i<=n ; i++)      // i: 1→2→3→...→n
    {
        sum *= i;                   // Accumulate: sum = sum × i
        // Iterations: sum = 1×1 = 1, then 1×2 = 2, then 2×3 = 6, etc.
    }
    cout<<"Factorial is "<<sum;     // Final result
}