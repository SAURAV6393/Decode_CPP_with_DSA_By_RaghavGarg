#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v = {19, 12, 23, 8, 16};  // Direct initialization
    int n = v.size();
    for(int i =0 ; i < n ; i++){
        cout<<v[i]<<" = "<< i<<endl ;
    }
    sort(v.begin(),v.end());
    cout<<"NEW"<<endl;
     for(int i =0 ; i < n ; i++){
        cout<<v[i]<<" = "<< i<<endl ;
    }
    return 0;
}
