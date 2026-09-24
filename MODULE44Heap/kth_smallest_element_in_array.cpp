#include <bits/stdc++.h>
using namespace std;

// K-th Smallest -> Max Heap
// K-th Largest  -> Min Heap

int main() {
    vector<int> v = {2, 4, 5, -3, 6, -8, 54, 44, 1};

    int n = v.size();
    int k = 3;

    // priority_queue<int> -> By default Max Heap
    priority_queue<int> pq;

    // Find K-th Smallest Element
    // Max Heap of size K maintain karenge
    for (int i = 0; i < n; i++) {
        pq.push(v[i]);

        // Size K se bada ho gaya -> largest element remove
        if (pq.size() > k)
            pq.pop();
    }

    // Top = K-th Smallest Element
    cout << "K-th Smallest Element: " << pq.top();

    // Time Complexity  : O(n log k)
    // Space Complexity : O(k)
    // A S  = O(k)

    return 0;
}