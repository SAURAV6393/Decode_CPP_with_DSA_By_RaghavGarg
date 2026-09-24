#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2, 4, 5, -3, 6, -8, 54, 44, 1};

    int n = v.size();
    int k = 3;

    priority_queue<int , vector<int> , greater<int>> pq;

    for(int x : v){
        pq.push(x);
        if(pq.size() > k) pq.pop();
    }
    
    cout << "K-th Largest Element: " << pq.top();


    return 0;
}