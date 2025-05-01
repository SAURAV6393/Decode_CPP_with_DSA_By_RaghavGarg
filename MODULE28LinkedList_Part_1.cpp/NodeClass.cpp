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
    // Creating nodes with values 10, 20, 30
    Node a(10);
    Node b(20);
    Node c(30);

    // Forming linked list
    a.next = &b;
    b.next = &c;

    // Printing the value of the third node
    //cout << a.next->next->val << endl;
    
    // Print list 
    Node* temp = &a;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}

// output : 30

// #include<iostream>
// using namespace std;
// class Node {
//     public:
//     int val;
//     Node *next;
//     Node(int val) {  // Linklist Node Constructor 
//         this->val = val;
//         this->next = NULL;
//     } 
// };
// int main () {
//     // cout << "Hello World" << endl;
//     // 10 20 30 
//     Node a(10); // Node a; 
//     Node b(20); // Node b;
//     Node c(30); // Node c;
//     // cout<<&a<<endl<<a.next<<endl;

//     // forming linklist
//     a.next = &b;
//     b.next = &c;
//     c.next = NULL;
//     cout << a.next->next->val << endl;

    
// }


