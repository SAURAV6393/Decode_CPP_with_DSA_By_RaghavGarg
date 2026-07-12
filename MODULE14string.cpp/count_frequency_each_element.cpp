#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    
    for(int i = 0 ; i < s.size() ; i++){
        char ch = s[i];
        int count = 0;
        for(int j = 0 ; j < s.size() ; j++){
            if(ch == s[j]) count++;
        }
        cout<<ch<<" is occur by "<<count<<" times"<<endl;
    }
}