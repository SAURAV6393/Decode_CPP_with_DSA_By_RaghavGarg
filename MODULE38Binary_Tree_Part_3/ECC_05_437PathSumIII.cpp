#include <bits/stdc++.h>
using namespace std;

// Path Sum III (Brute Force DFS)

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

int cnt = 0;

//-------------------------------------------------------------
// Checks all paths starting from current node
// TC : O(n)
// SC : O(h)
//-------------------------------------------------------------
void dfs(TreeNode* root, long long sum, int target) {

    if(root == NULL)
        return;

    sum += root->val;

    if(sum == target)
        cnt++;

    dfs(root->left, sum, target);
    dfs(root->right, sum, target);
}

//-------------------------------------------------------------
// Starts DFS from every node
// TC : O(n²)
// SC : O(h)
//-------------------------------------------------------------
void pathSum(TreeNode* root, int target) {

    if(root == NULL)
        return;

    dfs(root, 0, target);

    pathSum(root->left, target);
    pathSum(root->right, target);
}

int main() {

    TreeNode* a = new TreeNode(10);
    TreeNode* b = new TreeNode(5);
    TreeNode* c = new TreeNode(-3);
    TreeNode* d = new TreeNode(3);
    TreeNode* e = new TreeNode(2);
    TreeNode* f = new TreeNode(11);
    TreeNode* g = new TreeNode(3);
    TreeNode* h = new TreeNode(-2);
    TreeNode* i = new TreeNode(1);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    d->left = g;
    d->right = h;
    e->right = i;

    int target = 8;

    pathSum(a, target);

    cout << "Number of Paths = " << cnt << endl;

    return 0;
}

/*

                Binary Tree

                     10
                    /  \
                   5   -3
                  / \    \
                 3   2    11
                / \   \
               3  -2   1

----------------------------------------

Target = 8

Valid Paths

5 -> 3

5 -> 2 -> 1

-3 -> 11

Total = 3

----------------------------------------

Approach

1. Consider every node as a starting node.
2. From that node, find all downward paths.
3. If path sum becomes target, increase count.
4. Repeat for every node.

----------------------------------------

Time Complexity

dfs() = O(n)

Called for every node.

Total TC = O(n²)

Balanced Tree:
O(n log n)

Worst Case:
O(n²)

----------------------------------------

Space Complexity

SC = O(h)

Balanced Tree:
O(log n)

Worst Case:
O(n)

----------------------------------------

Optimal Approach

Prefix Sum + HashMap

TC : O(n)

SC : O(n)

*/