#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// height = levels - 1
int maxDepth(TreeNode *root)
{ // find number of levels of binary tree
    if (root == NULL) return 0;
    int leftHeight = maxDepth(root->left);
    int rightHeight = maxDepth(root->right);
    return 1 + max(leftHeight, rightHeight);
}

int main()
{
    TreeNode *a = new TreeNode(10);
    TreeNode *b = new TreeNode(20);
    TreeNode *c = new TreeNode(30);
    TreeNode *d = new TreeNode(40);
    TreeNode *e = new TreeNode(50);
    TreeNode *f = new TreeNode(60);
    TreeNode *g = new TreeNode(70);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout << "Number of levels in the binary tree is: " << maxDepth(a) << endl;

    return 0;
}

//         10
//       /    \
    //     20      30
//    /  \    /  \
    //  40   50  60  70

//     Recursive Call Tree

//     maxDepth(10)
// │
// ├── maxDepth(20)
// │   │
// │   ├── maxDepth(40)
// │   │      ├── NULL → 0
// │   │      └── NULL → 0
// │   │      return 1
// │   │
// │   └── maxDepth(50)
// │          ├── NULL → 0
// │          └── NULL → 0
// │          return 1
// │
// │   return 2
// │
// └── maxDepth(30)
//     │
//     ├── maxDepth(60)
//     │      return 1
//     │
//     └── maxDepth(70)
//            return 1

//     return 2

// return 3

// Interview Tip

// Is function ka naam maxDepth() hai kyunki LeetCode aur interviews me
//  maximum depth ka matlab hi number of levels hota hai. 
// Agar interviewer height in terms of edges pooche, to answer hoga: