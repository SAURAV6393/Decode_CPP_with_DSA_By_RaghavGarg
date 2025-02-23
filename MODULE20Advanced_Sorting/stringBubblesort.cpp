#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string str = "AZYZXBDJKX";
    int n = str.size();
    vector<char> v;
    for(int i = 0 ; i < n ; i++){
        if(str[i]>='X'){
            v.push_back(str[i]);
        }
    }
    sort(v.begin(),v.end());
    for(char c : v) {
        cout << c;
    }
    cout << endl;
    return 0;
}