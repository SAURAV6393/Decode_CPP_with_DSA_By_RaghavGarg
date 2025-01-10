#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> ans;

        // Case 1: x is smaller than the smallest element
        if (x <= arr[0]) {
            return vector<int>(arr.begin(), arr.begin() + k);
        }

        // Case 2: x is larger than the largest element
        if (x >= arr[n - 1]) {
            return vector<int>(arr.end() - k, arr.end());
        }

        // Case 3: General case - Binary search to find the closest elements
        int lo = 0, hi = n - 1;

        // Find the closest position to x
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] < x) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }

        // Initialize two pointers around the closest position
        int left = lo - 1;
        int right = lo;

        // Collect the k closest elements
        while (k--) {
            if (left < 0) {
                ans.push_back(arr[right++]);
            } else if (right >= n) {
                ans.push_back(arr[left--]);
            } else if (abs(arr[left] - x) <= abs(arr[right] - x)) {
                ans.push_back(arr[left--]);
            } else {
                ans.push_back(arr[right++]);
            }
        }

        // Sort the result since closest elements need to be in sorted order
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 3;

    vector<int> result = solution.findClosestElements(arr, k, x);

    cout << "Closest elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
