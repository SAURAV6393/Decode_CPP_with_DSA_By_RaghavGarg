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

// use only dot and arrow operator to form linked list (optmize approach)
int main(){
    // yaha keval a variable me address store hoga heap me bna hua node ka 
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    // forming linked list
    a->next = b;
    b->next = c;
    c->next = d;
    // // accessing the value of all node using arrow operator
    // cout<<a->val<<endl;
    // cout<<a->next->val<<endl;
    // cout<<a->next->next->val<<endl; 
    // cout<<a->next->next->next->val<<endl;
    // // accessing the value of all node using dereference + dot operator
    // cout<<(*a).val<<endl;
    // cout<<(*a->next).val<<endl;
    // cout<<(*a->next->next).val<<endl;
    // cout<<(*a->next->next->next).val<<endl;

    // print krne ka wahi purana tarika 
    Node* temp = a;    // yaha temp kevel address store kr rha hai a ka 
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;  
    }
}