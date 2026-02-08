#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
// my approach : Floyd's Cycle Detection Algorithm kevel slow ko 1 step aur fast ko 2 step aage badhao
bool hasCycle(Node *head) {
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        // always dono same position pe aayenge agar cycle hoga
        if(slow == fast) {
            return true;
        }
        }
        // agar cycle nahi hoga to fast NULL pe aa jayega
        return false;
    }
};

int main() {
    LinkedList ll;
    
    // Test case 1: Cycle exists
    Node* head1 = new Node(3);
    head1->next = new Node(2);
    head1->next->next = new Node(0);
    head1->next->next->next = new Node(-4);
    head1->next->next->next->next = head1->next; // Creates cycle
    
    cout << "Cycle exists: " << (ll.hasCycle(head1) ? "true" : "false") << endl;
    
    // Test case 2: No cycle
    Node* head2 = new Node(1);
    head2->next = new Node(2);
    
    cout << "Cycle exists: " << (ll.hasCycle(head2) ? "true" : "false") << endl;
    
    return 0;
}