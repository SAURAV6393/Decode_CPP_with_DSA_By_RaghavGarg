// #include<iostream>
// using namespace std;
//  int main()
// //  Input: nums = [5,7,7,8,8,10], target = 8
// // Output: [3,4]
// {
//     int nums[6] = {5,7,7,8,8,10};
//     int lo = 0;
//     int hi = 5 ;
//     int target = 8 ;
//     while(lo<=hi)
//     {
//         int a , b;
//         int mid = lo + (hi - lo )/ 2;
//         if(target < nums[mid]) hi = mid - 1;
//         else if(target > nums[mid]) lo = mid + 1 ;
//         else if(target == nums[mid]) 
//         {
//             a = mid ;
//             if(target == nums[mid-1]) b  = mid - 1;
//             else b = mid + 1 ;
//             return {a,b}; 
//         }
//     }
//     return{-1,-1};
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> findTargetIndices(int nums[], int size, int target) {
    int lo = 0, hi = size - 1;
    int start = -1, end = -1;

    // Find the starting index of the target
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] < target) {
            lo = mid + 1;
        } else if (nums[mid] > target) {
            hi = mid - 1;
        } else {
            start = mid;
            hi = mid - 1; // Narrow to the left half
        }
    }

    lo = 0;
    hi = size - 1;

    // Find the ending index of the target
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] < target) {
            lo = mid + 1;
        } else if (nums[mid] > target) {
            hi = mid - 1;
        } else {
            end = mid;
            lo = mid + 1; // Narrow to the right half
        }
    }

    return {start, end};
}

int main() {
    int nums[6] = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = findTargetIndices(nums, 6, target);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
