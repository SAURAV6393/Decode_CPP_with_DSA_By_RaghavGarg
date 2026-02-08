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
    // delete node yeh tab krna hai jab hume us node ka index given ho
    void deleteAtIdx(Node* head, int idx){
       Node* temp = head;
       if(idx == 0){
              head = head->next;
              delete temp;
         }
         else{
              for(int i = 0; i < idx - 1; i++){
                temp = temp->next;
              }
              Node* toDelete = temp->next;
              temp->next = temp->next->next;
              delete toDelete;
       }
    }
    // delete node yeh tab krna hai jab hume us node ki value given ho
    void deleteAtValue(Node* head, int val){
        Node* temp = head;
        if(head->val == val){
            head = head->next;
            delete temp;
        }
        else{
            while(temp->next->val != val){
                temp = temp->next;
            }
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }
    // leetcode 237 approach solution for delete node without head pointer
    void deleteNode(Node* node) {
        Node* temp = node->next;
        node->val = temp->val;
        node->next = temp->next;
        delete temp;
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
    ll.deleteAtIdx(ll.head, 2);
    cout<<"List after deleting node at index 2: ";
    ll.display(ll.head);
    ll.deleteAtValue(ll.head, 5);
    cout<<"List after deleting node with value 5: ";
    ll.display(ll.head);
    // Deleting node with value 20 using deleteNode function
    Node* nodeToDelete = ll.head->next; // Node with value 20
    ll.deleteNode(nodeToDelete);
    cout<<"List after deleting node with value 20 using deleteNode function: ";
    ll.display(ll.head);
    return 0;
    
}