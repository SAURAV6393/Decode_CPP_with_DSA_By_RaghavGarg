#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n = arr.size();
    vector<int> arr(7) ;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    
    for(int ele : arr){
        cout<<ele<<" ";
    }
}