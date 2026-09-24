#include <bits/stdc++.h>
using namespace std;

// Path Sum II (DFS + Backtracking)

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
// Method 1 : Running Sum
// TC : O(n)
// SC : O(h)
//-------------------------------------------------------------
void dfs1(TreeNode* root, int target, int sum, vector<int>& path, vector<vector<int>>& ans) {

    if(root == NULL)
        return;

    path.push_back(root->val);
    sum += root->val;

    if(root->left == NULL && root->right == NULL && sum == target)
        ans.push_back(path);

    dfs1(root->left, target, sum, path, ans);
    dfs1(root->right, target, sum, path, ans);

    path.pop_back();
}

vector<vector<int>> pathSum1(TreeNode* root, int targetSum) {

    vector<vector<int>> ans;
    vector<int> path;

    dfs1(root, targetSum, 0, path, ans);

    return ans;
}

//-------------------------------------------------------------
// Method 2 : Remaining Target (Recommended)
// TC : O(n)
// SC : O(h)
//-------------------------------------------------------------
void dfs2(TreeNode* root, int target, vector<int>& path, vector<vector<int>>& ans) {

    if(root == NULL)
        return;

    path.push_back(root->val);
    target -= root->val;

    if(root->left == NULL && root->right == NULL && target == 0)
        ans.push_back(path);

    dfs2(root->left, target, path, ans);
    dfs2(root->right, target, path, ans);

    path.pop_back();
}

vector<vector<int>> pathSum2(TreeNode* root, int targetSum) {

    vector<vector<int>> ans;
    vector<int> path;

    dfs2(root, targetSum, path, ans);

    return ans;
}

int main() {

    TreeNode* a = new TreeNode(5);
    TreeNode* b = new TreeNode(4);
    TreeNode* c = new TreeNode(8);
    TreeNode* d = new TreeNode(11);
    TreeNode* e = new TreeNode(13);
    TreeNode* f = new TreeNode(4);
    TreeNode* g = new TreeNode(7);
    TreeNode* h = new TreeNode(2);
    TreeNode* i = new TreeNode(5);
    TreeNode* j = new TreeNode(1);

    a->left = b;
    a->right = c;
    b->left = d;
    c->left = e;
    c->right = f;
    d->left = g;
    d->right = h;
    f->left = i;
    f->right = j;

    // vector<vector<int>> ans = pathSum1(a, 22);
    vector<vector<int>> ans = pathSum2(a, 22);

    cout << "Paths\n\n";

    for(auto &v : ans) {
        for(int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}

/*

                Binary Tree

                     5
                   /   \
                  4     8
                 /     / \
               11     13  4
              /  \        / \
             7    2      5   1

----------------------------------------

Target = 22

Valid Paths

5 -> 4 -> 11 -> 2

5 -> 8 -> 4 -> 5

----------------------------------------

Method 1 : Running Sum

1. Maintain current path sum.
2. Add current node value to sum.
3. At leaf node check:
      sum == target
4. Backtrack.

TC : O(n)
SC : O(h)

----------------------------------------

Method 2 : Remaining Target (Recommended)

1. Subtract current node value from target.
2. At leaf node check:
      target == 0
3. Backtrack.

TC : O(n)
SC : O(h)

----------------------------------------

Interview Preference

✔ Method 2 is preferred because it avoids maintaining
an extra sum variable and the base condition becomes
target == 0.

*/