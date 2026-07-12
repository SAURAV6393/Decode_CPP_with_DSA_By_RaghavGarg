#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // stack<int> temp;
    // stack<int> dummy;

    // // st -> temp
    // while(!st.empty()){
    //     temp.push(st.top());
    //     st.pop();
    // }

    // // temp -> dummy
    // while(!temp.empty()){
    //     dummy.push(temp.top());
    //     temp.pop();
    // }

    // // dummy -> st
    // while(!dummy.empty()){
    //     st.push(dummy.top());
    //     dummy.pop();
    // }

    // // print reversed stack
    // while(!st.empty()){
    //     cout << st.top() << " ";
    //     st.pop();
    // }


    // Using one vector/array to reverse a stack
    vector<int> v;
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();
    }

    for(int i = 0 ;i < v.size() ; i++){
        st.push(v[i]);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}