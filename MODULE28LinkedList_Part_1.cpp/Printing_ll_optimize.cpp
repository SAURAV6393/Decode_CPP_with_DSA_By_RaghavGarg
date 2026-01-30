#include<iostream>
using namespace std;

class Node{
    public: 
    int val;
    Node* next ;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    // forming ll
    a->next = b;
    b->next = c;
    c->next = d;

    Node* temp = a;
    // Traversal 
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    // easy to print value 
    cout<<a->next->next->val<<endl; // same 
    cout<<(*a).next->next->val; // dereference + dot operator
    
}