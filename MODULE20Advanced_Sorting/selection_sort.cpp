// Final Complexity:
// Best Case Time Complexity: O(n²)   [when array is already sorted]
// Worst Case Time Complexity: O(n²)   [when array is reverse sorted]
// Average Case Time Complexity: O(n²)  [when array is random]
// Space Complexity: O(1) (only a few extra variables used)

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1, 3,20,0, 5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < n ; i++){
        int min_index = i;
        for(int j = i+1 ; j < n ; j++){
            if(arr[j] < arr[min_index ]){     
                min_index = j;
            }
        }
        if (min_index != i) {  // Swap only if necessary
            swap(arr[i], arr[min_index]);
        }
    }

    // Printing the sorted array
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
