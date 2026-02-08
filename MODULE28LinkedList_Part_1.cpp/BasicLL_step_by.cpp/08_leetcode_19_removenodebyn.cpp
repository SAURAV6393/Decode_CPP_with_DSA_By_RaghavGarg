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
    // leetcode 19 approach solution for delete nth node from end with head pointer 
    Node* removeNthFromEnd(Node* head, int n) {
        Node* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        if(n == len){
            head = head->next;
            return head;
        }
        // nth element from end = (len - n + 1) from start (brute force approach)
        int m = len - n + 1;
        int idx = m - 1; // the idx of node to be deleted
        temp = head;
        for(int i = 1; i < idx; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        cout << "After deletion: ";
        display(head);
        return head;
    }
    // alternate approach use slow and fast pointer  
    Node* removeNthFromEndBest(Node* head, int n) {
        Node* slow  = head;
        Node* fast  = head;
        // traverse fast pointer n+1 times
        for(int i = 1; i <= n+1; i++){
            if(fast == NULL){
                // this means we have to delete the head node
                head = head->next;
                return head;
            }
            fast = fast->next;
        }
        // move slow & fast at same speed until fast reaches the end
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        // now slow is pointing to the node just before the one to be deleted
        slow->next = slow->next->next;
        cout << "After deletion: ";
        display(head);
        return head;
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
    int n = 2;
    ll.head = ll.removeNthFromEnd(ll.head, n);
    ll.head = ll.removeNthFromEndBest(ll.head, n);
    return 0;
    
}