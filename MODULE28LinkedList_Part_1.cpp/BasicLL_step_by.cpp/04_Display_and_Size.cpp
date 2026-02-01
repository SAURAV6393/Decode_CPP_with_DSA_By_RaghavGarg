#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){  // parameterized constructor
        this->val = val;  
        this->next = NULL;
    }
};

// display function to print linked list and size    (  Simple Function )
void display(Node* head){ // head is address of first node which is a pointer
    Node* temp = head;  // temp variable traverse krega aur head wahi rhega(first node)
    int count = 0; // size
    while(temp != NULL){       // T.C = O(N) , S.C = O(1)    (better in space complexity)
        cout<<temp->val<<" ";
        temp = temp->next;
        count++;
    }
    cout<<endl;
    cout<<"Length of Linked List is: "<<count<<endl;
}

// // recursively display 
// void display(Node* head){        // T . C = O(N) , S.C = O(N)
//     if(head == NULL) return ;
//     cout<<head->val<<" ";
//     display(head->next);
// }


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