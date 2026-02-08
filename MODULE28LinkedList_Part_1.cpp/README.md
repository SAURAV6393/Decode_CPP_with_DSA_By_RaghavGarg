# MODULE 28: Linked List Part 1

## 📌 Overview
Linked lists are dynamic data structures where elements are linked through pointers. This module covers basics, operations, and common problems.

## 🎯 Learning Goals
- ✅ Understand linked list structure
- ✅ Implement node creation and linking
- ✅ Implement insertion and deletion
- ✅ Traverse and reverse linked lists
- ✅ Solve common linked list problems

## 🔑 Key Concepts (To be implemented)

### 1. Node Structure
```cpp
struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
```

### 2. Linked List Class
```cpp
class LinkedList {
private:
    Node* head;
    
public:
    LinkedList() { head = nullptr; }
    
    void insertFront(int val);
    void deleteNode(int val);
    void display();
    void reverse();
};
```

### 3. Common Operations
- **Insert**: At beginning, at end, at position
- **Delete**: Remove specific node
- **Search**: Find element
- **Reverse**: Reverse the list
- **Merge**: Combine two lists

### 4. Problem Types
- **Palindrome**: Check if linked list is palindrome
- **Cycle**: Detect cycle in linked list
- **Merge**: Merge two sorted linked lists
- **Reverse**: Reverse first k nodes

### 5. Time Complexity
- **Access**: O(n)
- **Insert/Delete**: O(1) if position known
- **Search**: O(n)

## 💡 Advantages of Linked Lists
- Dynamic size
- Efficient insertion/deletion
- No memory waste
- Cache unfriendly (vs arrays)

## 📚 Related Topics

- Prerequisites: Pointers (MODULE10), OOPs (MODULE25)
- Next Steps: Stacks, Queues (MODULE16-17)
- Use in: Graph representation, memory management

## ⏱️ Estimated Time: 6-8 hours

---

**Last Updated**: February 2026 (Content to be expanded)
