#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<float>v;
     v.push_back(5.4);
     cout<<v.size()<<endl;
    v.push_back(336);
    cout<<v.size()<<endl;
    v.push_back(34);
    cout<<v.size()<<endl;
    v.push_back(202);
    cout<<v.size()<<endl;
     //v[0] = 567;
     v.pop_back();
    for(int i=0 ; i<v.size(); i++)
   {  
      cout<<v[i]<<" "; 
   }
}