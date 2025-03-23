// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).
// Example 2:

// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).
#include<iostream>
using namespace std;
 int main()
 {
    int arr[5] = { 1,2,3,4,4};
    for(int i = 0 ; i < 5 ; i++){
    if(arr[i]!=arr[i+1])
    {
      cout<<arr[i]<<" ";
    }
    else
    arr[i+1] = 0 ;
    }
    int i = 1;
    int min = arr[0];
    while(i<5)
    {
    if(arr[i]<min)
    {
      arr[i] = min ;
    }
    i++ ;
    }
    cout<<endl;
    for(int i = 0 ; i < 5 ; i++)
    {
      cout<<arr[i]<<" ";
    }
 }