#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

int main() {
    // ===== 1. REFERENCE OPERATOR (&) =====
    cout << "1. REFERENCE OPERATOR (&) - Get Address\n";
    Node n1(10);
    Node* ptr = &n1;  // & gives address of n1
    cout << "Address of n1: " << &n1 << endl;
    cout << "ptr stores: " << ptr << endl << endl;
    
    // ===== 2. DEREFERENCE OPERATOR (*) =====
    cout << "2. DEREFERENCE OPERATOR (*) - Get Object from Pointer\n";
    cout << "(*ptr).data = " << (*ptr).data << endl;
    cout << "(*ptr).next = " << (*ptr).next << endl << endl;
    
    // ===== 3. ARROW OPERATOR (->) =====
    cout << "3. ARROW OPERATOR (->) - Direct Member Access\n";
    cout << "ptr->data = " << ptr->data << endl;
    cout << "ptr->next = " << ptr->next << endl << endl;
    
    // ===== 4. CREATE LINKED LIST =====
    cout << "4. CREATE AND TRAVERSE LINKED LIST\n";
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    
    // ===== 5. TRAVERSE - METHOD 1: Arrow Operator =====
    cout << "\nMethod 1 - Arrow Operator (->):\n";
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";  // Arrow operator
        current = current->next;
    }
    cout << endl;
    
    // ===== 6. TRAVERSE - METHOD 2: Dereference + Dot =====
    cout << "\nMethod 2 - Dereference (*) + Dot (.):\n";
    current = head;
    while (current != nullptr) {
        cout << (*current).data << " ";  // Same as arrow
        current = (*current).next;
    }
    cout << endl;
    
    // ===== 7. TRAVERSE - METHOD 3: Pointer to Pointer =====
    cout << "\nMethod 3 - Pointer to Pointer (**):\n";
    Node** pptr = &head;  // Pointer to pointer
    while (*pptr != nullptr) {
        cout << (*pptr)->data << " ";
        pptr = &((*pptr)->next);
    }
    cout << endl;
    
    // ===== 8. ADVANCED: Access Specific Node =====
    cout << "\nAdvanced - Access 2nd Node:\n";
    Node* second = head->next;  // Arrow to get next
    cout << "2nd node data: " << second->data << endl;
    cout << "2nd node data: " << (*second).data << endl;
    
    // ===== 9. ADVANCED: Modify Through Pointer =====
    cout << "\nModify 1st Node:\n";
    head->data = 100;  // Modify using arrow
    cout << "Modified data: " << head->data << endl;
    
    return 0;
}
