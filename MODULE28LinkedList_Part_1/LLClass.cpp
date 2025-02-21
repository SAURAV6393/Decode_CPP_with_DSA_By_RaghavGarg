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
class linkedList{ // User defined data structure 
public: 
    Node* head ;
    Node* tail ;
    int size ;
    linkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(size == 0) head = tail = newNode;
        else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(size == 0) head = tail = newNode;
        else{
            newNode->next = head;
            head = newNode;
        }
        size++;
    }
    void deleteAtHead(){
        if(size == 0) {cout<<"list is empty "; return;}
        else if(size == 1) head = tail = NULL;
        else{
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        size--;
    }
    void deleteAtTail(){
        if(size == 0) {cout<<"list is empty "; return;}
        else if(size == 1) head = tail = NULL;
        else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
            size--;
        }   
    }
    void deleteAtIdx(int idx){
        if(size == 0) {cout<<"list is empty "; return;}
        else if(idx < 0 || idx >= size) {cout<<"invalid "; return;}
        else if (size == 1) head = tail = NULL;
        else if(idx == 0) deleteAtHead();
        else if(idx == size - 1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i = 0; i < idx - 1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void getAtIdx(int idx){
        if(idx < 0 || idx >= size) {cout<<"invalid "; return;}
        Node* temp = head;
        for(int i = 0; i < idx; i++){
            temp = temp->next;
        }
        cout<<temp->val<<endl;
    }
    void insertAtIdx(int idx , int val){
        if(idx < 0 || idx > size) {cout<<"invalid "; return;}
        else if (idx == 0) insertAtHead(val);
        else if (idx == size) insertAtTail(val);
        else{
            Node* newNode = new Node(val);
            Node* temp = head;
            for(int i = 0; i < idx - 1; i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            size++;
        }  
    }
};
    
int main() {
    linkedList ll ; // { head = NULL; }
    ll.insertAtTail(10); // { head = 10->NULL; }
    //ll.display(); 
    ll.insertAtTail(20); // { head = 10->20->NULL; }
    //ll.display(); 
    ll.insertAtTail(30); // { head = 10->20->30->NULL; }
    ll.insertAtTail(40); // { head = 10->20->30->40->NULL; }
    //ll.display();
    ll.insertAtHead(52); // { head = 5->10->20->30->40->NULL; }
    //ll.display();
    ll.insertAtIdx(2, 100); // { head = 5->10->100->20->30->40->NULL; }
    // ll.display();
    // // ll.getAtIdx(2); // 100
    // // ll.getAtIdx(5); // 30
    // //ll.getAtIdx(6); // invalid
    // ll.deleteAtHead(); // { head = 10->20->30->40->NULL; }
    // ll.display();
    // ll.deleteAtHead(); // { head = 20->30->40->NULL; }
    ll.display();
    // ll.deleteAtTail(); // { head = 20->30->NULL; }
    // ll.display();
    ll.deleteAtIdx(3); // { head = 20->30->NULL; }
    ll.display();
    
    //cout<<"LinkedList size is "<<ll.size; // 4
}