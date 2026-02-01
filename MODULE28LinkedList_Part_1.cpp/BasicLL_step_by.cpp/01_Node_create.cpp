#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;  // Add assignment operator
        this->next = NULL;
    }
};
int main(){
    // creating node with values 10 , 20, 30 ,40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming linked list 
    a.next = &b;
    b.next = &c;
    c.next = &d; // d already has NULL 
    // accessing the value of all node  using one node 
    cout<<a.val<<endl;
    cout<<(a.next)->val<<endl;
    cout<<(a.next->next)->val<<endl;
    cout<<(a.next->next->next)->val<<endl;
    // accessing the value of one node using dereferce operator
    cout<<(*(a.next)).val<<endl;
    cout<<(*(a.next->next)).val<<endl;
    cout<<(*(a.next->next->next)).val<<endl;    
    // write the all possible way which are same (arrow and dereference + dot)
    // a.next->val == (*(a.next)).val
    cout<<a.next->val<<endl;
    cout<<(*(a.next)).val<<endl;
    cout<<a.next->next->val<<endl;
    cout<<(*(a.next->next)).val<<endl;
    cout<<a.next->next->next->val<<endl;
    cout<<(*(a.next->next->next)).val<<endl;

 }