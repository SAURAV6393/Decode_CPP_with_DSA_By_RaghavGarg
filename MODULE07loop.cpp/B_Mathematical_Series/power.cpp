/*
CONCEPT: Calculate Power (a^b)
FORMULA: a^b = a × a × a × ... × a (b times)
EXAMPLE: 2^5 = 2×2×2×2×2 = 32
PATTERN: Multiply accumulator by base, power times
COMPLEXITY: O(b) time - where b is exponent
*/
#include<iostream>
using namespace std;
int main ()
{
    int a;                          // Base number
    int t, power = 1;               // t: exponent, power: accumulator (start with 1)
    cout<<"Enter a number :  ";
    cin>>a;
    cout<<"Enter the power  :  ";
    cin>>t;
    
    // Multiply base 'a' by itself 't' times
    for(int i = 1 ; i <= t ; i++)   // Loop t times
    {
        power *= a;                 // Accumulate: power = power × a
        // Iterations: 1×2=2, 2×2=4, 4×2=8, 8×2=16, 16×2=32
    }
    cout<<power;                    // Final result

}