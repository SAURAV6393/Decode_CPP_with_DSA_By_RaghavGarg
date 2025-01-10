#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<float>v;
    v.push_back(5.4);
    v.push_back(336);
    v.push_back(34);
    v.push_back(202);
     //v[0] = 567;
     v.pop_back();
    for(int i=0 ; i<v.size(); i++)
   {  
      cout<<v[i]<<" "; 
   }
    
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
}