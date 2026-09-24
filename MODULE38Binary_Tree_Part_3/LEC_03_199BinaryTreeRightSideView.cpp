#include <bits/stdc++.h>m
using namespace std;

// Right Side View (Recursive Level Order Approach)

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
// Returns Number of Levels (Maximum Depth)
// TC : O(n)
// SC : O(h)
//-------------------------------------------------------------
int levels(TreeNode* root) {
    if (root == NULL)
        return 0;

    return 1 + max(levels(root->left), levels(root->right));
}

//-------------------------------------------------------------
// Finds Rightmost Node of Target Level
// TC : O(n)
// SC : O(h)
//-------------------------------------------------------------
void nthLevel(TreeNode* root, int currLevel, int targetLevel, int &val) {
    if (root == NULL)
        return;

    if (currLevel == targetLevel) {
        val = root->val;      // Last visited node becomes rightmost
        return;
    }

    nthLevel(root->left, currLevel + 1, targetLevel, val);
    nthLevel(root->right, currLevel + 1, targetLevel, val);
}

//-------------------------------------------------------------
// Right Side View
// TC : O(n × h)
// Balanced Tree : O(n log n)
// Worst Case    : O(n²)
// SC : O(h)
//-------------------------------------------------------------
vector<int> rightSideView(TreeNode* root) {

    vector<int> ans;

    if (root == NULL)
        return ans;

    int totalLevels = levels(root);

    for (int i = 1; i <= totalLevels; i++) {
        int val = 0;
        nthLevel(root, 1, i, val);
        ans.push_back(val);
    }

    return ans;
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

    vector<int> ans = rightSideView(a);

    cout << "Right Side View\n\n";

    for (int x : ans)
        cout << x << " ";

    cout << endl;

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

Rightmost = 3

----------------------------------------

Level 3

4 5 6 7

Rightmost = 7

----------------------------------------

Level 4

8 9 10 11

Rightmost = 11

----------------------------------------

Output

1 3 7 11

----------------------------------------

Approach

1. Find total number of levels.
2. Visit each level recursively.
3. Traverse Left → Right.
4. Store every visited node of that level.
5. The last visited node becomes the rightmost node.

----------------------------------------

Time Complexity

levels() = O(n)

nthLevel() = O(n)

Called for every level.

Total TC = O(n × h)

Balanced Tree:
O(n log n)

Worst Case (Skew Tree):
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

DFS (Right → Left)
or
BFS using Queue

TC = O(n)

SC = O(h) [DFS]
SC = O(n) [BFS]

*/