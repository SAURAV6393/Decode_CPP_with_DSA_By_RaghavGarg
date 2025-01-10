#include<iostream>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// Input: strs = ["flower","flow","flight"]
// Output: "fl"
int main()
{
    vector<string> v;
    cout<<"Unsorted : ";
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");  

    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    // lexographically
    sort(v.begin(), v.end());
    cout<<endl<<endl<<"Sorted : ";
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}