#include<iostream>
using namespace std;;
int main ()
{ //  0 1 1 2 3 5 8 13 21 34 55
    // int n , c ;
    // int a =0 , b= 1;
    // cout<<"Enter the number : ";
    // cin>>n;
    // cout<<a<<endl<<b<<endl;
    // for(int i = 0 ; i < n ; i++)
    // { c = a + b;
    //    b = a;
    //    c = b;
    // cout<<a;}
    int n, a=0,b=1,c;
    cout<<"Enter a  terms : ";
    cin>>n;
	for(int i=0; i<n ; i++)
	{
	//printf("%d ",a);
    cout<< a<<" ";
	c=a+b;
	a=b;
	b=c;
	}


    
   }