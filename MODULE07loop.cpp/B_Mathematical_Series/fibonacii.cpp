/*
CONCEPT: Fibonacci Sequence Generation
FORMULA: F(n) = F(n-1) + F(n-2)
SEQUENCE: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
LOGIC: Each number is sum of previous two
PATTERN: Maintain two variables and shift them each iteration
*/
#include<iostream>
using namespace std;;
int main ()
{
    int n, a=0, b=1, c;             // a: first, b: second, c: next
    cout<<"Enter a  terms : ";
    cin>>n;
    
    // Generate n terms of Fibonacci sequence
    for(int i=0; i<n ; i++)         // Loop n times
    {
        cout<< a<<" ";              // Print current Fibonacci number
        c = a + b;                  // Calculate next: sum of previous two
        a = b;                      // Shift: a becomes b
        b = c;                      // Shift: b becomes new value
        // Example: (0,1) → print 0 → c=1 → (1,1) → print 1 → c=2 → (1,2) → print 1 → c=3 → (2,3) → print 2
    }
    // Output: 0 1 1 2 3 5 8 13 21 34 55
}