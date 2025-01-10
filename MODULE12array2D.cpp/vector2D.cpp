#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
     vector<int> v2;
     v2.push_back(4);
    v2.push_back(5);
    vector<int> v3;
     v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    vector<vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[1][1];

}
