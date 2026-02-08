/*
CONCEPT: Arithmetic Progression of Odd Numbers
FORMULA: ith odd number = 2i + 1 (where i starts from 0)
SEQUENCE: 1, 3, 5, 7, 9, 11, ...
PROPERTY: Sum of first n odd numbers = n²
EXAMPLE: Input 5 → Output 1,3,5,7,9 and sum would be 25=5²
*/
#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter n terms : ";
    cin>>n;
    
    // Generate first n odd numbers
    for(int i=0 ; i<n ; i++)        // i: 0→1→2→...→n-1
    {
        cout<<(2*i + 1)<<" , ";     // Print ith odd number: 2i+1
        // i=0: 2(0)+1=1
        // i=1: 2(1)+1=3
        // i=2: 2(2)+1=5
        // i=3: 2(3)+1=7
        // i=4: 2(4)+1=9
    }
    // Output: 1 , 3 , 5 , 7 , 9 ,
}