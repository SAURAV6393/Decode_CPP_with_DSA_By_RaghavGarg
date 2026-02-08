#include<iostream>
using namespace std;
 
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// int main(){
//     Node a(10);
//     Node b(20);
//     Node c(30);
//    // cout<<a.next;
//     a.next = &b;
//     b.next = &c;
//     Node temp = a;
//     while(1){
//         cout<<temp.val<<" ";
//         if(temp.next == NULL) break;
//         temp = *(temp.next);
//     }
// }

// simple ll node and display 
class Node {
    public:
    int val;
    Node* next ;
    Node(int val){
        this->val = val;
        this->next  = NULL;
    }

};
void display(Node* head){
    if(head == NULL) return ;
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }

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