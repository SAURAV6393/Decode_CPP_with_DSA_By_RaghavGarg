#include<iostream>
using namespace std;

class Node { // User defined data type
    public:
        int val;
        Node* next;
        Node(int val) {  // Linked list Node Constructor 
            this->val = val;
            this->next = NULL;
        }
};

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deletenode(Node* head, int targetval) {
    if(head->val == targetval) {
        return head->next;
    }
    Node* temp = head;
    while (temp->next->val != targetval) {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
    // delete node;
    // display(head
}


int main() {
    // 10 20 30 40
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = a;
    display(head);
    head =  deletenode(a,20);
    display(head);
}