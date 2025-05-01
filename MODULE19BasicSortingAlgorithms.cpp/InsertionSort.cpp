#include<iostream>
using namespace std;
int main ()
{
    int arr[] = {5,4,8,2,1};
    int n = 5;
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    // insertion sort
    
    for(int i = 1 ; i < n ;i++){
        int j = i;
        // while(j>=1){
        //     if(arr[j] >= arr[j-1]) break ;
        //     else swap (arr[j],arr[j-1]);
        //     j-- ;
        // }

        while(j>=1 && arr[j] < arr[j-1]){
          swap (arr[j],arr[j-1]);
            j-- ;
        }
    }

    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
}