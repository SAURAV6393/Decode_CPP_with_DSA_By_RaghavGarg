#include<iostream>
using namespace std;

int main() {

   int num1;
   int p = 5 , q= 10;
   p += q -= p;  // first solve q -= p then p+= ( q -= p)  [rught to left solve ]
   cout<<p<<" "<<q<<endl;
   return  0;
}
