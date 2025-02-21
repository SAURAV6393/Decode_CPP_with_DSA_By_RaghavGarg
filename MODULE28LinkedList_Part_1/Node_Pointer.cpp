#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {  // Linked list Node Constructor 
        this->val = val;
        this->next = NULL;
    } 
};

int main() {
    // Creating nodes with values 10, 20, 30 , 40
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    cout<<a->next->next->next->val<<endl;
    // Printing the list values 
    // Node* temp = a;
    // while (temp != NULL) {
    //     cout << temp->val << " ";
    //     temp = temp->next;
    // }
}
