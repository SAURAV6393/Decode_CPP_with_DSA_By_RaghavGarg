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
// simple Display

// void display(Node* head){
//     Node* temp = head;
//     int count = 0;
//     while(temp != NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//         count++;
//     }
//     cout<<endl;
//     cout<<"Length of Linked List is: "<<count<<endl;
// }

// recursively display
void display(Node* head){
    if(head == NULL) return ;
    cout<<head->val<<" ";
    display(head->next);
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a); 


}