#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v)
{
    int n = v.size();
    int noo = 0;
    int noz = 0;
    for(int  i = 0 ; i<n ; i++)
    {
        if (v[i]==0)
        noz++;
        else
        noo++;
    }
    // filling elements 
    for(int  i = 0 ; i < n ; i++)
    {
        if(i<noz)
        v[i] = 0;
        else 
        v[i] = 1;
    }
}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(-21);
    v.push_back(30);
    v.push_back(90);
    v.push_back(-1);
    v.push_back(31);
    v.push_back(70);
    v.push_back(-19);
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
    for(int  i = 0 ; i <v.size() ; i++ )
    {
        cout<<v[i]<<" ";
    }
}