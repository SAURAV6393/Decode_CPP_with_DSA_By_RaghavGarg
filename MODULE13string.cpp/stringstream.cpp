#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    // string str = "raghav is a math teacher";
    // stringstream ss(str);
    // string temp;
    // while(ss>>temp)
    // cout<<temp<<endl ;
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    string temp;
    stringstream ss(str);
    while(ss>>temp)
    cout<<temp<<endl;
}