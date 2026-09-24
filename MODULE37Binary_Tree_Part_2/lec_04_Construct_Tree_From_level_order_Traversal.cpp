#include<bits/stdc++.h>
#include<queue>
using namespace std;

// BFS traversal Using Queue
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

//==================== YOUR METHOD ====================//
TreeNode* Construct(int arr[], int n){
    queue<TreeNode*> q;
    TreeNode* root = new TreeNode(arr[0]);
    q.push(root);

    int i = 1;
    int j = 2;

    while(q.size() > 0 && i < n){
        TreeNode* temp = q.front();
        q.pop();

        TreeNode* l;
        TreeNode* r;

        if(arr[i] != INT_MIN)
            l = new TreeNode(arr[i]);
        else
            l = NULL;

        // Bug Fix: j < n
        if(j < n && arr[j] != INT_MIN)
            r = new TreeNode(arr[j]);
        else
            r = NULL;

        temp->left = l;
        temp->right = r;

        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);

        i += 2;
        j += 2;
    }

    return root;
}

//==================== OPTIMIZED METHOD ====================//
TreeNode* ConstructOptimized(int arr[], int n){
    if(n == 0) return NULL;

    queue<TreeNode*> q;
    TreeNode* root = new TreeNode(arr[0]);
    q.push(root);

    int idx = 1;

    while(!q.empty() && idx < n){
        TreeNode* curr = q.front();
        q.pop();

        if(idx < n && arr[idx] != INT_MIN){
            curr->left = new TreeNode(arr[idx]);
            q.push(curr->left);
        }
        idx++;

        if(idx < n && arr[idx] != INT_MIN){
            curr->right = new TreeNode(arr[idx]);
            q.push(curr->right);
        }
        idx++;
    }

    return root;
}

//==================== LEVEL ORDER ====================//
void levelOrderQueue(TreeNode* root){
    if(root == NULL) return;

    queue<TreeNode*> q;
    q.push(root);

    while(q.size() > 0){
        TreeNode* temp = q.front();
        q.pop();

        cout << temp->val << " ";

        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
}

//==================== MAIN ====================//
int main(){

    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Your Method
    TreeNode* root1 = Construct(arr, n);
    cout << "Your Construct : ";
    levelOrderQueue(root1);

    cout << endl;

    // Optimized Method
    TreeNode* root2 = ConstructOptimized(arr, n);
    cout << "Optimized Construct : ";
    levelOrderQueue(root2);

    return 0;
}

/*
Time Complexity:
Construct()            : O(n)
ConstructOptimized()   : O(n)
LevelOrderQueue()      : O(n)

Auxiliary Space:
Construct()            : O(n)
ConstructOptimized()   : O(n)
LevelOrderQueue()      : O(n)

Why Optimized?
1. Uses only one index (idx) instead of i and j.
2. Safer boundary checking (idx < n).
3. Uses !q.empty() instead of q.size() > 0.
4. Cleaner and easier to maintain.
*/