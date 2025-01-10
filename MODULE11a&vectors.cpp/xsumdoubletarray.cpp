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
    cout<<endl<<"OUTPUT ARRAY : ";
    for(int i = 0 ; i< v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"ENTER FIND SUM NUMBER : ";
    cin>>x;
    for(int i = 0 ; i<= v.size() - 2 ;i++ )
    {
        for(int j = i+1 ; j<= v.size()-1 ; j++ )
        {
            if(v[i]+ v[j]==x)
            cout<<"("<<i<<","<<j<<")"<<endl;
        }
    }
}