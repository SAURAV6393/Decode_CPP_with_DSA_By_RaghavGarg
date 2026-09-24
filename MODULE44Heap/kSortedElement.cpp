#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {6,5,3,2,8,10,9};
    int n = v.size();
    int k = 3;

    priority_queue<int, vector<int>, greater<int>> pq;

    // First k+1 elements
    for(int i = 0; i <= k && i < n; i++){
        pq.push(v[i]);
    }

    // Process remaining elements
    for(int i = k + 1; i < n; i++){
        cout << pq.top() << " ";
        pq.pop();

        pq.push(v[i]);
    }

    // Remaining elements
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
// mera code hai 
// #include<bits/stdc++.h>
// #include<queue>
// using namespace std;

// int main(){
//     vector<int> v = {6,5,3,2,8,10,9};
//     int n = v.size();
//     int k = 3;

//     priority_queue<int, vector<int>, greater<int>> pq;

//     for(int i = 0; i < n; i++){
//         pq.push(v[i]);

//         if(pq.size() > k){
//             cout << pq.top() << " ";
//             pq.pop();
//         }
//     }

//     while(!pq.empty()){
//         cout << pq.top() << " ";
//         pq.pop();
//     }

//     return 0;
// }