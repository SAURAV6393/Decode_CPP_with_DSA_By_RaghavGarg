#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,x;
    cout<<" ENTER THE SIZE OF VECTOR : ";
    cin>>n;
    vector<int>v(n);
    cout<<endl<<"Enter the input in vector : ";
    for(int i = 0 ; i< v.size() ; i++)
    {
        cin>>v[i];
    }
    for(int i = 0 ; i< v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    int findno ;
    cout<<endl<<"Enter find number : ";
    cin>>findno;
    int idx = -1;
    for(int i=v.size() -1  ; i>= 0 ; i-- )
    {
        if(v[i]==findno)
       {
         idx = i;
         break;
       }
    }
   cout<<endl<<idx<<" place element present";
}