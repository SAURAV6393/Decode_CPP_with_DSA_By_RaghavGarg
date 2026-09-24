#include <bits/stdc++.h>
using namespace std;

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

//-------------------------------------------------------------
// Construct Binary Tree from Level Order Array
// (-1 represents NULL)
// Time Complexity : O(n)
// Space Complexity: O(n)
//-------------------------------------------------------------
TreeNode* Construct(int arr[], int n) {
    if (n == 0 || arr[0] == -1) return NULL;

    TreeNode* root = new TreeNode(arr[0]);
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;

    while (!q.empty() && i < n) {
        TreeNode* curr = q.front();
        q.pop();

        // Left Child
        if (i < n && arr[i] != -1) {
            curr->left = new TreeNode(arr[i]);
            q.push(curr->left);
        }
        i++;

        // Right Child
        if (i < n && arr[i] != -1) {
            curr->right = new TreeNode(arr[i]);
            q.push(curr->right);
        }
        i++;
    }

    return root;
}

//-------------------------------------------------------------
// Left Boundary (excluding leaf nodes)
// Time Complexity : O(h)
// Space Complexity: O(h)
//-------------------------------------------------------------
void leftBoundary(TreeNode* root) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) return;

    cout << root->val << " ";

    if (root->left)
        leftBoundary(root->left);
    else
        leftBoundary(root->right);
}

//-------------------------------------------------------------
// Leaf Nodes
// Time Complexity : O(n)
// Space Complexity: O(h)
//-------------------------------------------------------------
void bottomBoundary(TreeNode* root) {
    if (root == NULL) return;

    if (root->left == NULL && root->right == NULL) {
        cout << root->val << " ";
        return;
    }

    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

//-------------------------------------------------------------
// Right Boundary (excluding leaf nodes)
// Time Complexity : O(h)
// Space Complexity: O(h)
//-------------------------------------------------------------
void rightBoundary(TreeNode* root) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) return;

    if (root->right)
        rightBoundary(root->right);
    else
        rightBoundary(root->left);

    cout << root->val << " ";
}

//-------------------------------------------------------------
// Boundary Traversal
// Time Complexity : O(n)
// Space Complexity: O(h)
//-------------------------------------------------------------
void Boundary(TreeNode* root) {
    if (root == NULL) return;

    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root->right);
}

int main() {
    // Level Order Representation (-1 = NULL)
    int arr[] = {
        1,
        2, 3,
        4, 5, -1, 6,
        7, -1, 8, -1, 9, 10,  // <-- YAHAN CHANGE KIYA HAI (9, -1, 10, -1 ki jagah 9, 10)
        -1, 11, -1, 12, -1, 13, -1, 14,
        15, 16, -1, 17, -1, -1, 18, -1,
        19, -1, -1, -1, 20, 21, 22, 23,
        -1, 24, 25, 26, -1, 27, -1, 28
    };

    int n = sizeof(arr) / sizeof(arr[0]);

    TreeNode* root = Construct(arr, n);

    cout << "Boundary Traversal : ";
    Boundary(root);

    return 0;
}

/*         

                    1
                 /     \
                2       3
              /   \      \
             4     5      6
            /     /      / \
           7     8      9  10
            \      \      \    \
            11     12     13   14
           /  \      \          /
         15   16     17       18
        /             / \      / \
      19            20  21   22  23
        \          / \    \        \
        24       25  26   27       28


Expected Boundary Traversal:

1 2 4 7 11 15 19 24 16 25 26 27 13 28 23 18 14 10 6 3

*/