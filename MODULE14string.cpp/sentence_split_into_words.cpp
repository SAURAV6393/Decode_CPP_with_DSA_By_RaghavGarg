#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"ENTER STRING :";
    getline(cin,str);
    stringstream ss(str);
    string word;
    while(ss>>word){
        cout<<word<<endl;
    }
}