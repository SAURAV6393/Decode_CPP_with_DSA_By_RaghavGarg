#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {4, 2, 4, 3, 2, 4, 1, 3};
    int n = 8;

    unordered_map<int, int> freq;

    // Frequency count
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Map ko vector mein convert
    vector<pair<int, int>> v(freq.begin(), freq.end());

    // Element ke according sort
    sort(v.begin(), v.end());

    // Print
    for (auto p : v) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}