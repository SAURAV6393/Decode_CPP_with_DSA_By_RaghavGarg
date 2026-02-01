#include<iostream>
using namespace std;
class Node{     // user defined data type
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;  
        this->next = NULL;
    }
};
class LinkedList{   // user defined data structure
public:
    Node* head ;
    Node* tail ;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    // display function
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" -> ";
            temp = temp->next;
        }
        cout<<endl;
    }
    // insert at tail function
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    // insert at head function
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
};
int main(){
    // int* arr[] = new int[];  // dynamic array
    // LinkedList* ll = new LinkedList(); // dynamic linked list 
    LinkedList ll ; // { head = NULL; }
    ll.insertAtTail(10); // { head = 10->NULL; }
    ll.display();
    ll.insertAtTail(20); // { head = 10->20->NULL; }
    ll.display();
    ll.insertAtTail(30); // { head = 10->20->30->NULL; }
    ll.insertAtTail(40); // { head = 10->20->30->40->NULL; }
    ll.display();
    cout<<"Size of linked list is: "<<ll.size<<endl;
    ll.insertAtHead(5); // { head = 10->20->30->40->50->NULL; }
    ll.display();
    cout<<"Size of linked list is: "<<ll.size<<endl;

}