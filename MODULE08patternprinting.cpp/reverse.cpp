#include<iostream>
//REVERSE
// * * * *
// * * * 
// * * 
// * 
using namespace std;
int main ()
{
    int n ;
    cout<<"Enter the rows : ";
    cin>>n;
    
     for(int i = 1; i<= n; i++)
    {  
        for(int j =  n ; 0<j ; j--)
        {
            cout<<" * ";
        }
        cout<<endl;
        ;
    }
}