#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<float>v;
    v.push_back(5.4);
    v.push_back(336);
    v.push_back(34);
    v.push_back(202);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

}