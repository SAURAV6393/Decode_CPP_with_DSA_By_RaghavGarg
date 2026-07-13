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

int maxNode(TreeNode* root){
    if(root == NULL) return INT_MIN;  // V.V important INT_MIN is all values(-,+) and 0 for +ve value
    int leftMax = maxNode(root->left);
    int rightMax = maxNode(root->right);
    return max(root->val , max(leftMax , rightMax));
}

int minNode(TreeNode* root){
    if(root == NULL) return INT_MAX;  // V.V important INT_MAX is all values(-,+) and 0 for -ve value
    int leftMin = minNode(root->left);
    int rightMin = minNode(root->right);
    return min(root->val , min(leftMin , rightMin));
}

int prodNode(TreeNode* root){
    if(root == NULL) return 1;  // V.V important line leaf node ka child NULL hota hata hai 
    return root->val * prodNode(root->left) * prodNode(root->right);
}


int main(){
    TreeNode* a = new TreeNode(10);
    TreeNode* b = new TreeNode(20);
    TreeNode* c = new TreeNode(30);
    TreeNode* d = new TreeNode(480);
    TreeNode* e = new TreeNode(50);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(70);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    
    cout<<"max node of tree is : "<<maxNode(a)<<endl;
    cout<<"min node of tree is : "<<minNode(a)<<endl;
    cout<<"product of all nodes is : "<<prodNode(a);

}