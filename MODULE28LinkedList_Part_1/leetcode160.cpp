#include <iostream>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode *next;
        ListNode(int val) {
            this->val = val;
            this->next = nullptr;
        }
};

class Solution {
    public:
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            if (!headA || !headB) return nullptr;
            
            ListNode *tempA = headA;
            ListNode *tempB = headB;
            int lenA = 0, lenB = 0;

            // Calculate the length of both lists
            while (tempA) {
                lenA++;
                tempA = tempA->next;
            }
            while (tempB) {
                lenB++;
                tempB = tempB->next;
            }

            // Reset pointers
            tempA = headA;
            tempB = headB;

            // Move the longer list's pointer ahead by the difference
            int diff = abs(lenA - lenB);
            if (lenA > lenB) {
                while (diff--) tempA = tempA->next;
            } else {
                while (diff--) tempB = tempB->next;
            }

            // Move both pointers until they meet or reach the end
            while (tempA && tempB) {
                if (tempA == tempB) return tempA;  // Intersection found
                tempA = tempA->next;
                tempB = tempB->next;
            }

            return nullptr;  // No intersection
        }
};

int main() {
    // Create linked lists
    ListNode *headA = new ListNode(4);
    headA->next = new ListNode(1);
    ListNode *intersectNode = new ListNode(8);
    headA->next->next = intersectNode;
    intersectNode->next = new ListNode(4);
    intersectNode->next->next = new ListNode(5);

    ListNode *headB = new ListNode(5);
    headB->next = new ListNode(0);
    headB->next->next = new ListNode(1);
    headB->next->next->next = intersectNode; // Intersection point

    Solution obj;
    ListNode *result = obj.getIntersectionNode(headA, headB);
    
    if (result) {
        cout << "Intersection Node: " << result->val << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}
