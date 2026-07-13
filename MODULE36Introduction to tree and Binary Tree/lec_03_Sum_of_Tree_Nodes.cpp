#include<bits/stdc++.h>
using namespace std;

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

void displayTree(TreeNode* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int sum(TreeNode* root){
    // Base Condition 
    if(root == NULL) return 0;  // V.V important line leaf node ka child NULL hota hata hai 
    return root->val + sum(root->left) + sum(root->right);
} 

int main(){
    TreeNode* a = new TreeNode(10);
    TreeNode* b = new TreeNode(20);
    TreeNode* c = new TreeNode(30);
    TreeNode* d = new TreeNode(40);
    TreeNode* e = new TreeNode(50);
    TreeNode* f = new TreeNode(60);
    TreeNode* g = new TreeNode(70);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    //displayTree(a);
    cout<<"Sum of Tree is : "<<sum(a);
}

//            10
//          /    \
//        20      30
//       /  \    /  \
//     40   50  60  70

//     sum(root) = root->val + sum(root->left) + sum(root->right)

//  🌳 Call Stack Visualization
 
//  sum(10)
// │
// ├── sum(20)
// │   │
// │   ├── sum(40)
// │   │      ├── sum(NULL)=0
// │   │      └── sum(NULL)=0
// │   │      return 40
// │   │
// │   └── sum(50)
// │          ├── sum(NULL)=0
// │          └── sum(NULL)=0
// │          return 50
// │
// │   return 110
// │
// └── sum(30)
//     │
//     ├── sum(60)
//     │      ├── sum(NULL)=0
//     │      └── sum(NULL)=0
//     │      return 60
//     │
//     └── sum(70)
//            ├── sum(NULL)=0
//            └── sum(NULL)=0
//            return 70

//     return 160

// return 280