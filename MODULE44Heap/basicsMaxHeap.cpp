#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq; // c++ mei by default maxheap bnta hai (minheap bhi hota hai ek)
    pq.push(1);
    pq.push(-1);
    pq.push(30);
    pq.push(-3);

    cout<<pq.top();
    pq.pop();
    cout<<pq.top();

}       