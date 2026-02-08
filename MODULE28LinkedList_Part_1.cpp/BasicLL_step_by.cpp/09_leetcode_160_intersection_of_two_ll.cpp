#include<iostream>
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

    // My Approach: Time O(m+n), Space O(1)
    // Find lengths of both lists, advance longer list, then traverse together
    Node *getIntersectionNode(Node *headA,Node *headB) {
        // yeh maine solve kiya 
    Node* tempA = headA;
    Node* tempB = headB;
        int lenA = 0 , lenB = 0;
        while(tempA != NULL){
            lenA++;
            tempA = tempA->next;
        } 
         while(tempB != NULL){
            lenB++;
            tempB = tempB->next;
        } 
        if(lenA > lenB) {
            for(int i = 0 ; i < (lenA - lenB) ; i++) {
                headA = headA->next;
            } 
        }
        if(lenB > lenA) {
            for(int i = 0 ; i < (lenB - lenA) ; i++) {
                headB = headB->next;
            } 
        }
        for(int i = 0 ; i < min(lenA,lenB) ; i++){
            if(headA == headB) return headA;
            else {
                headA = headA->next;
                headB = headB->next;
            }
        }
        return NULL;
    }

    // Sir's Approach: Time O(m+n), Space O(1)
    Node* getIntersectionNode_SIR(Node* headA, Node* headB) {
        Node* tempA = headA;
        Node* tempB = headB;
        int lenA = 0, lenB = 0;

        while (tempA != NULL) {
            lenA++;
            tempA = tempA->next;
        }

        while (tempB != NULL) {
            lenB++;
            tempB = tempB->next;
        }

        tempA = headA;
        tempB = headB;

        if (lenA > lenB) {
            int diff = lenA - lenB;
            for (int i = 0; i < diff; i++) {
                tempA = tempA->next;
            }
        } else if (lenB > lenA) {
            int diff = lenB - lenA;
            for (int i = 0; i < diff; i++) {
                tempB = tempB->next;
            }
        }

        while (tempA != tempB) {
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return tempA;
    }
};

int main() {
    LinkedList ll;
    
    Node* headA = new Node(1);
    headA->next = new Node(2);
    headA->next->next = new Node(3);
    headA->next->next->next = new Node(4);
    headA->next->next->next->next = new Node(5);

    Node* headB = new Node(6);
    headB->next = new Node(7);
    headB->next->next = headA->next->next; // Intersection at node 3

    cout << "List A: ";
    ll.display(headA);
    cout << "List B: ";
    ll.display(headB);

    cout << "Intersection point: " << ll.getIntersectionNode(headA, headB)->val << endl;
    cout << "Intersection point (SIR): " << ll.getIntersectionNode_SIR(headA, headB)->val << endl;

    return 0;
}