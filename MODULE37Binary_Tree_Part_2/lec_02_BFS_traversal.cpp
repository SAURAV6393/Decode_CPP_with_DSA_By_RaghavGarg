#include <bits/stdc++.h>
using namespace std;

// Level Order Traversal (Recursive Approach)
// BFS Output using DFS Recursion
// tree
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

// Returns number of levels (Maximum Depth)
int levels(TreeNode* root) {
    if (root == NULL)return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

// Prints all nodes present at a given level
void nthLevel(TreeNode* root, int currLevel, int targetLevel) {
    if (root == NULL) return;
    if (currLevel == targetLevel) {
        cout << root->val << " ";
        return;
    }
    nthLevel(root->left, currLevel + 1, targetLevel);
    nthLevel(root->right, currLevel + 1, targetLevel);
}

// Level Order Traversal
void levelOrder(TreeNode* root) {
    int totalLevels = levels(root);
    for (int i = 1; i <= totalLevels; i++) {
        nthLevel(root, 1, i);
        cout << endl;
    }
}

int main() {

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

    cout << "Level Order Traversal\n\n";

    levelOrder(a);

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
            8    9 10   11

----------------------------------------

Level 1

1

----------------------------------------

Level 2

2 3

----------------------------------------

Level 3

4 5 6 7

----------------------------------------

Level 4

8 9 10 11

----------------------------------------

Output

1
2 3
4 5 6 7
8 9 10 11

----------------------------------------

Traversal Type

Output  : BFS (Level Order)

Technique Used : DFS (Recursion)

Reason:
- We are recursively visiting nodes to print one level at a time.
- Queue is NOT used.

----------------------------------------

Time Complexity

levels()      = O(n)

nthLevel()    = O(n)

Called for every level.

Total TC = O(n × h)

Balanced Tree:
O(n log n)

Worst Case (Skew Tree):
O(n²)

----------------------------------------

Space Complexity

SC = O(h)

Worst Case:
O(n)

Balanced Tree:
O(log n)

----------------------------------------

Can We Optimize?

✅ Yes

Instead of calling nthLevel() for every level,
use a Queue.

Queue-based Level Order Traversal

TC = O(n)

SC = O(n)

This is the standard BFS solution used in interviews and LeetCode.

*/