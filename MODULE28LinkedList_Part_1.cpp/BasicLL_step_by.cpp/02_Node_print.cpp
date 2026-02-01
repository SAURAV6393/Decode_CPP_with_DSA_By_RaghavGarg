#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;  
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
    c.next = &d;
    
    // METHOD - 1 : USING POINTER
    // print the all node (except last node) using while loop
    // 10 20 30 40
    Node temp = a;           // puri node copy kr rha hai - temp = (val + next) of a and temp ek alag object hai
    while(temp.next != NULL){
        cout<<temp.val<<" ";
        temp = *(temp.next);
    }
    // output :- 10 20 30
    
    // METHOD - 2 : USING POINTER
    // take condn for print last node 
    Node temp = a; // puri node copy kr rha hai - temp = (val + next) of a and temp ek alag object hai
    while(true){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }

}    