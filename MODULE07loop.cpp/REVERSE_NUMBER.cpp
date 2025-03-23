#include<iostream>
using namespace std;
int main()
{
   // 9874

//    steps
//    1) last digit
//    2) r = r*10
//    3) r += last digit
//    3) n /= 10 
   int n ;
   cout<<"Enter a number : ";
   cin>>n;
   int last_digit = 0;
   int reverse = 0;
   while(n>0){
      last_digit = n % 10;
      reverse *= 10;
      reverse += last_digit;
      n/= 10;
    }
    cout<<reverse;
}