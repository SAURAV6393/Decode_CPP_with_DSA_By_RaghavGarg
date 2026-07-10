#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    // filling 
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // Using two stack 
    stack<int> temp;
    while(!st.empty()){
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    
    // push element temp to dummy
     stack<int> dummy;
    while(!temp.empty()){
        int x = temp.top();
        temp.pop();
        dummy.push(x);
    }

     // push element dummy to st
    while(!dummy.empty()){
        int x = dummy.top();
        dummy.pop();
        dummy.push(x);
    }

}