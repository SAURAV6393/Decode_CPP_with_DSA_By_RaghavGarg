#include <bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

// ====================== Preorder Traversal ======================
// Root -> Left -> Right
// Time Complexity: O(n)
// Space Complexity: O(n)

vector<int> preorderTraversal(TreeNode* root){
    vector<int> ans;
    stack<TreeNode*> st;

    if(root != NULL) st.push(root);

    while(!st.empty()){
        TreeNode* temp = st.top();
        st.pop();

        ans.push_back(temp->val);

        if(temp->right != NULL) st.push(temp->right);
        if(temp->left != NULL) st.push(temp->left);
    }

    return ans;
}

// ====================== Inorder Traversal ======================
// Left -> Root -> Right
// Time Complexity: O(n)
// Space Complexity: O(n)

vector<int> inorderTraversal(TreeNode* root){
    vector<int> ans;
    stack<TreeNode*> st;
    TreeNode* node = root;

    while(!st.empty() || node){
        if(node){
            st.push(node);
            node = node->left;
        }
        else{
            TreeNode* temp = st.top();
            st.pop();

            ans.push_back(temp->val);
            node = temp->right;
        }
    }

    return ans;
}

// ====================== Postorder Traversal ======================
// Left -> Right -> Root
// (Using One Stack + Reverse)
// Time Complexity: O(n)
// Space Complexity: O(n)

vector<int> postorderTraversal(TreeNode* root){
    vector<int> ans;
    stack<TreeNode*> st;

    if(root != NULL) st.push(root);

    while(!st.empty()){
        TreeNode* temp = st.top();
        st.pop();

        ans.push_back(temp->val);

        if(temp->left != NULL) st.push(temp->left);
        if(temp->right != NULL) st.push(temp->right);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main(){

    // Constructing the tree
    //         1
    //       /   \
    //      2     3
    //     / \   / \
    //    4   5 6   7

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<int> pre = preorderTraversal(root);
    vector<int> in = inorderTraversal(root);
    vector<int> post = postorderTraversal(root);

    cout << "Preorder Traversal: ";
    for(int x : pre) cout << x << " ";

    cout << "\nInorder Traversal: ";
    for(int x : in) cout << x << " ";

    cout << "\nPostorder Traversal: ";
    for(int x : post) cout << x << " ";

    return 0;
}