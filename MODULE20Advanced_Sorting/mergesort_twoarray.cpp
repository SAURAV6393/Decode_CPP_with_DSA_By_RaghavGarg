#include<iostream>
#include<vector>
using namespace std;
void MergeSort(vector<int>& arr, vector<int>& brr, vector<int> &res){
    int n = 0 ;
    int m = 0;  
    int k = 0;
    while(n < arr.size() && m < brr.size()){
        if(arr[n] <= brr[m]) res[k++] = arr[n++];
        else  res[k++] = brr[m++];
    }
    if(n==arr.size()) res[k++] = brr[m++];
    else res[k++] = arr[n++];
    
}
int main(){
    vector<int> arr = {1, 4,5,8,19};
    int n= arr.size();
    vector<int> brr = {2, 3, 6, 7,10};
    int m = brr.size();
    vector<int> res(n+m);
    MergeSort(arr, brr, res);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }

}