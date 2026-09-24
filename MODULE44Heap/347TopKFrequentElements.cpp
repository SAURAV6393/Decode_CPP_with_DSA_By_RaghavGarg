#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 1, 2, 1, 2, 3, 1, 3, 2};
    int n = v.size();
    int k = 2;

    // ek map bna lete hai
    // map mei har element ki frequency store krenge
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++) {
        m[v[i]]++;
    }

    // abb chahiye ek min heap
    // pair mei {frequency, element} store krenge
    // minimum frequency wala element top par rahega
    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    // map -> min heap mei element daalenge
    for (auto p : m) {

        // p.second = frequency
        // p.first  = element
        pq.push({p.second, p.first});

        // agar heap ka size k se bada ho gya
        // toh minimum frequency wala element remove kr denge
        if (pq.size() > k) {
            pq.pop();
        }
    }

    // ek ans vector jisme top k frequent elements store honge
    vector<int> ans;

    while (pq.size() > 0) {

        // pq.top() ek pair dega
        // .second se actual element access krenge
        ans.push_back(pq.top().second);

        pq.pop();
    }

    // answer ko sorted order mei print krne ke liye
    // LeetCode mei iski zarurat nhi hai
    sort(ans.begin(), ans.end());

    // answer print krenge
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}