#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<" ENTER THE SIZE OF VECTOR : ";
    cin>>n;
    vector<string>v(n);
    vector<int>g(n);
    cout<<endl<<"Enter the input in vector : ";
    for(int i = 0 ; i< v.size() ; i++)
    {
        cin>>v[i];
        g[i] = stoll(v[i]);
    }
    for(int i = 0 ; i< v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    int max = g[0];
    int index;
    for(int i = 1 ; i< v.size() ; i++)
    {
      if(max < g[i] )
        {
          max = g[i] ;
          index = i ;
        }
    }
    cout<<endl<<max<<" is biggest number at index "<<index;
}