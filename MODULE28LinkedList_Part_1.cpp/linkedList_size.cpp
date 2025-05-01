#include<iostream>
using namespace std;

class Node {
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

// recursive function to display the linked list
void displayrec(Node* head) {
    if (head == NULL) return;
    cout << head->val << " ";
    displayrec(head->next);
}

// reverse the linked list
void revDisplay(Node* head) {
    if (head == NULL) return;
    revDisplay(head->next);
    cout << head->val << " ";
}

// find the size of linked list 
int size(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}
void insertAtEnd(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) head = newNode;
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
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

    // traversing the list and printing the values
    // display(a);
    display(a);
    cout << endl;
    insertAtEnd(a, 60);
    display(a);
    // cout << "size of linkedlist is " << size(a);
}
 