#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s = "AZYZXBYDXJK";
    string str;
    for(int i =  0 ; i < s.length() ; i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    //  sort(str.begin(),str.end());
     for(int i =  0 ; i < s.length() - 1; i++){
        if(str[i]>str[i+1]){
            int temp = str[i];
            str[i] = str[i+1];
            str[i+1] = temp ;
        }
    }
    

    cout<<str;
}