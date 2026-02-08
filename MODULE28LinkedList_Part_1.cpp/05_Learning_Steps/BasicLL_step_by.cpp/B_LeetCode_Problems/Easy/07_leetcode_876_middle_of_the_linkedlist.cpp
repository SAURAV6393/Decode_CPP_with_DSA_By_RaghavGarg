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
class LinkedList{
    public:
    Node* head ;
    Node* tail;
    int size ;
    LinkedList(){
        head = tail = NULL;
        size = 0; 
    }
    void display(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" -> ";
            temp = temp->next;
        }
        cout<<endl;
    }
    // leetcode 876 approach solution for delete middle node with head pointer
    // brute force approach
    void deleteMiddleNode(Node* node) {
        Node* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        int midIdx = len / 2 ;
        Node* mid = head;
        for(int i = 0 ; i < midIdx ; i++){
            mid = mid->next;
        }
        cout<<endl<<"Right Middle index is "<<mid;

    }
    // optimized approach using slow and fast pointer
    void deleteMiddleNodeOptimized(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<endl<<"Middle node value is: "<<slow;
    }
};
 
int main(){
    LinkedList ll;
    ll.head = new Node(10);
    ll.head->next = new Node(20);
    ll.head->next->next = new Node(30);
    ll.head->next->next->next = new Node(40);
    cout<<"Original List: ";
    ll.display(ll.head);
    ll.deleteMiddleNode(ll.head);
    cout<<"List after deleting middle node of ll using deleteMiddleNode function: ";
    ll.display(ll.head);
    ll.deleteMiddleNodeOptimized(ll.head);
    ll.display(ll.head);
    return 0;
    
}