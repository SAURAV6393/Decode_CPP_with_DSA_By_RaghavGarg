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
    // insert at index function
    void insertAt(int idx, int val){
        if(idx < 0 || idx > size) cout<<"Invalid Index"<<endl;
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else{
            Node* temp = new Node(val);
            Node* prev = head;
            for(int i = 1; i <= idx-1; i++){
                prev = prev->next;
            }
            temp->next = prev->next;
            prev->next = temp;
            size++;
        }
    } 
    // get at index function
    void getAtIdx(int idx){
        if(idx < 0 || idx >= size) cout<<"Invalid Index"<<endl;
        else{
            Node* temp = head;
            for(int i = 0; i < idx; i++){
                temp = temp->next;
            }
            cout<<temp->val<<endl;
        }
    }  
    // delete at head function
    void deleteAtHead(){
        if(size == 0) {cout<<"List is empty"<<endl; return;}
        else if(size == 1) head = tail = NULL;
        else{
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        size--;
    }
    // delete at tail function
    void deleteAtTail(){
        if(size == 0) {cout<<"List is empty"<<endl; return;}
        else if(size == 1) head = tail = NULL;
        else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }   
        size--;
    }
    // delete at index function
    void deleteAtIdx(int idx){  
        if(size == 0) {cout<<"List is empty"<<endl; return;}
        else if(idx < 0 || idx >= size) {cout<<"Invalid Index"<<endl; return;}
        else if (size == 1) head = tail = NULL;
        else if(idx == 0) deleteAtHead();
        else if(idx == size - 1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i = 0; i < idx - 1; i++){
                temp = temp->next;
            }
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            size--;
        }
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
    ll.insertAt(2,15); // { head = 10->15->20->30->40->50->NULL; }
    ll.display();
    ll.getAtIdx(2); // 15
    ll.getAtIdx(4); // 30
    ll.deleteAtHead(3); // { head = 10->15->20->40->50->NULL; }
    ll.display();
    ll.deleteAtTail(); // { head = 10->15->20->40->NULL; }
    ll.display();
    ll.deleteAtIdx(1); // { head = 10->20->40->NULL; }


}