#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<float>v(5);
    for(int i=0; i<5 ; i++)
    {
        cin>>v[i];
    }
     for(int i=0; i<5 ; i++)
    {
        cout<<v[i]<<" ";
    }
}