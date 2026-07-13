#include<iostream>
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

int size(TreeNode* root){
    // Base Condition 
    if(root == NULL) return 0;  // V.V important line leaf node ka child NULL hota hata hai 
    return 1 + size(root->left) + size(root->right);
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

    cout<<"Size of Binary tree is : "<<size(a);
}

//            10
//          /    \
//        20      30
//       /  \    /  \
//     40   50  60  70

//     size(root) = 1 + size(root->left) + size(root->right)

// Call Stack Visualization

// size(10)
// │
// ├── size(20)
// │   │
// │   ├── size(40)
// │   │      ├── size(NULL)=0
// │   │      └── size(NULL)=0
// │   │      return 1
// │   │
// │   └── size(50)
// │          ├── size(NULL)=0
// │          └── size(NULL)=0
// │          return 1
// │
// │   return 3
// │
// └── size(30)
//     │
//     ├── size(60)
//     │      return 1
//     │
//     └── size(70)
//            return 1

//     return 3

// return 7