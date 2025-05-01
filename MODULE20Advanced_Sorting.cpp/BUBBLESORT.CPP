// 5  4  3  2  1
// Final Complexity of Bubble Sort
// Best Case Time Complexity: O(n) (with optimization), O(n²) (without optimization)
// Worst Case Time Complexity: O(n²)
// Average Case Time Complexity: O(n²)
// Space Complexity: O(1) (only a few extra variables used)

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = { 5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    // print array before sorting
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    // // bubble sort the array 
    // for(int i = 0 ; i < n-1 ;i++){
    //     for(int j = 0 ; j < n-1-i ; j++){
    //         if(arr[j] > arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //             sum++;
    //         }
    //     }
    // }

    // optimize bubble sort the array 
    for(int i = 0 ; i < n-1 ;i++){
        bool flag = false;
        for(int j = 0 ; j < n-1-i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = true;
                sum++;
            }
        }
        if(flag == false){
            break;
        }
    } 

    cout<<endl;
    // print array after sorting
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Total Swaps: "<<sum<<endl;
    return 0;

}