#include<iostream>
#include<queue>
using namespace std;

// | Operation    | Meaning                  | Time       |
// | ------------ | ------------------------ | ---------- |
// | `pq.push(x)` | Element insert           | `O(log n)` |
// | `pq.top()`   | Highest priority element | `O(1)`     |
// | `pq.pop()`   | Top element remove       | `O(log n)` |
// | `pq.size()`  | Number of elements       | `O(1)`     |
// | `pq.empty()` | Check empty or not       | `O(1)`     |


int main(){

    // Max Heap
    priority_queue<int> pq;

    pq.push(10);
    pq.push(-2);
    pq.push(30);
    pq.push(40);

    cout << "Max Heap Top: " << pq.top() << endl;
    cout << "Size: " << pq.size() << endl;

    pq.pop();   // removes 40

    cout << "After pop, Top: " << pq.top() << endl;

    cout << "Max Heap elements: ";
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << "\n\n";


    // Min Heap
    priority_queue<int, vector<int>, greater<int>> m_pq;

    m_pq.push(1);
    m_pq.push(-2);
    m_pq.push(3);
    m_pq.push(4);

    cout << "Min Heap Top: " << m_pq.top() << endl;
    cout << "Size: " << m_pq.size() << endl;

    m_pq.pop();   // removes -2

    cout << "After pop, Top: " << m_pq.top() << endl;

    cout << "Min Heap elements: ";
    while(!m_pq.empty()){
        cout << m_pq.top() << " ";
        m_pq.pop();
    }

    cout << endl;

    return 0;
}