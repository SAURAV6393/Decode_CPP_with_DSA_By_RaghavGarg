#include<iostream>
using namespace std;
 int main ()
 {
    int n,m;
    cout<<"Enter no. of lines : ";
    cin>>n;
    int mid = n/2 + 1;
    //cout<<"Enter no. of stars in each line : ";
    //cin>>m;
    for(int i = 1; i<=n ; i++)
    {
        for(int j = 1; j<=n ; j++) 
        {  if(i==mid || j == mid)
            cout<<"*";
            else cout<<"#";
        }
            cout<<endl;
    }


 }