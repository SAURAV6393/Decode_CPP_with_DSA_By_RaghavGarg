#include <bits/stdc++.h>
using namespace std;

// LeetCode:
// 144 -> Binary Tree Preorder Traversal
// 94  -> Binary Tree Inorder Traversal
// 145 -> Binary Tree Postorder Traversal

// DFS (Depth First Search) Traversals

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

// ==================== Preorder ====================
// Root -> Left -> Right
void preOrder(TreeNode* root) {
    if (root == NULL) return;

    cout << root->val << " ";

    preOrder(root->left);
    preOrder(root->right);
}

// ==================== Inorder ====================
// Left -> Root -> Right
void inOrder(TreeNode* root) {
    if (root == NULL) return;

    inOrder(root->left);

    cout << root->val << " ";

    inOrder(root->right);
}

// ==================== Postorder ====================
// Left -> Right -> Root
void postOrder(TreeNode* root) {
    if (root == NULL) return;

    postOrder(root->left);
    postOrder(root->right);

    cout << root->val << " ";
}

int main() {

    // Creating Nodes
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);
    TreeNode* h = new TreeNode(8);
    TreeNode* i = new TreeNode(9);
    TreeNode* j = new TreeNode(10);
    TreeNode* k = new TreeNode(11);

    // Connecting Nodes
    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->left = f;
    c->right = g;

    d->left = h;

    e->left = i;
    e->right = j;

    f->right = k;

    cout << "Preorder Traversal  : ";
    preOrder(a);

    cout << "\nInorder Traversal   : ";
    inOrder(a);

    cout << "\nPostorder Traversal : ";
    postOrder(a);

    return 0;
}

/*
                Binary Tree

                    1
                  /   \
                 2     3
               /  \   / \
              4    5 6   7
             /    / \  \
            8    9 10 11

-------------------------------------------------------

Preorder (Root Left Right)

1 2 4 8 5 9 10 3 6 11 7

-------------------------------------------------------

Inorder (Left Root Right)

8 4 2 9 5 10 1 6 11 3 7

-------------------------------------------------------

Postorder (Left Right Root)

8 4 9 10 5 2 11 6 7 3 1

-------------------------------------------------------

Traversal Type : DFS (Depth First Search)

Reason:
- Recursion is used.
- We visit one branch completely before moving to another.

-------------------------------------------------------

Time Complexity (All Traversals)

TC = O(n)

Reason:
Every node is visited exactly once.

-------------------------------------------------------

Space Complexity (All Traversals)

SC = O(h)

where h = Height of Tree

Worst Case (Skew Tree)     : O(n)
Balanced Binary Tree       : O(log n)

-------------------------------------------------------

Can We Optimize?

Time Complexity:
❌ No

Reason:
Every node must be visited at least once.

Best Possible TC = O(n)

Space Complexity:
Recursive DFS = O(h)

Iterative DFS (using Stack):
TC = O(n)
SC = O(h)

Both are optimal.
*/