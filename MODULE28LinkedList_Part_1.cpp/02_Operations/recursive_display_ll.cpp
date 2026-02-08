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
void display(Node* head){
    if(head == NULL)   return;
    cout<<head->val<<" ";
    display(head->next);
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    // forming ll
    a->next = b;
    b->next = c;
    c->next = d;

    display(a);
    
}