#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   // vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
   int nums1[4] = {1,2,2,1};
   int nums2[2] = {2,2}; 
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        
        if(n>m){
            int arr[m];
            for(int i = 0 ; i < m ; i++){
                for(int j = 0 ; j < n ; j++){
                    if(nums2[j]==nums1[i]){
                        arr[j]= nums1[i];
                    }
                }
            }

        }
        return arr;

    
}