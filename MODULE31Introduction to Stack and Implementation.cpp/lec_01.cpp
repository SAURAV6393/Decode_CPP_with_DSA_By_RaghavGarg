#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    // Create a stack of integers
    stack<int> s;
    cout << "Stack size: " << s.size() << endl;
    //operations on stack
    //1. push  , pop  , top  , empty  , size
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;
    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
}