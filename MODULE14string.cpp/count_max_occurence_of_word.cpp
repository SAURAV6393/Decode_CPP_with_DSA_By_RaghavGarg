#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"ENTER STRING :";
    getline(cin,str);
    stringstream ss(str);
    string word;
    vector<string> words;
    while(ss>>word){
        words.push_back(word);
    }
    int max_count = 0;
    string max_word;
    for(int i=0;i<words.size();i++){
        int count = 0;
        for(int j=0;j<words.size();j++){
            if(words[i] == words[j]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            max_word = words[i];
        }
    }
    cout<<"Maximum occurrence word is: "<<max_word<<" with count: "<<max_count<<endl;
}