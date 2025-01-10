#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sockMerchant(int n, vector<int> socks) {
    sort(socks.begin(), socks.end());
    int pairs = 0;

    for (int i = 0; i < n - 1; ++i) {
        if (socks[i] == socks[i + 1]) {
            ++pairs; // Found a pair
            ++i;     // Skip the next sock in the pair
        }
    }

    return pairs;
}

int main() {
    vector<int> socks = {10, 20, 20, 10, 10, 30, 50, 10, 20};
    int n = socks.size();
    cout << "Total pairs: " << sockMerchant(n, socks) << endl;
    return 0;
}
