#include<iostream>
#include<vector>
using namespace  std;
int main ()

    // int n,x;
    // cout<<" ENTER THE SIZE OF VECTOR : ";
    // cin>>n;
    // vector<int>v(n);
    // cout<<"Enter the input in vector : "<<endl;
    // for(int i = 0 ; i< v.size() ; i++)
    // {
    //     cin>>v[i];
    // }
    // for(int i = 0 ; i< v.size() ; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl<<"Enter the search element  in vector :  ";
    // cin>>x;
    // int index = v.size() - 1;
    // for(int i = n ; i<= v.size() ; i--)
    // {
    //     if(x==v[i])
    //     {
    //         cout<<endl<<(index-i);
    //         n= -1;
    //     }
    // }
    // if(n==-1)
    // cout<<"ELEMENT NOT PRESENT:  ";
{
    vector<int>v;
    v.push_back(54);
    v.push_back(36);
    v.push_back(34);
    v.push_back(22);
     v.push_back(4);
    v.push_back(6);
    v.push_back(4);
    v.push_back(22);
    int x=22;
    int idx = -1;
    for(int i = 0; i<v.size() ; i++)
    {
        if(v[i]==x)
        idx = i;
    }
    cout<<idx;
   
   
}