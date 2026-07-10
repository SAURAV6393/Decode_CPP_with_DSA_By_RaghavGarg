#include<bits/stdc++.h>
//#include<stack>
using namespace std;
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  // print stack
//   while(!st.empty()){
//     cout<<st.top()<<" ";
//     st.pop();
//   }

  // how to get the elements back in stack after printing / popping  T.C = o(n)
  stack<int> temp;
  while(!st.empty()){
    cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    temp.push(x);
  }

  // back push element from temp to st
   while(!temp.empty()){
    int x = temp.top();
    temp.pop();
    st.push(x);
  }

}