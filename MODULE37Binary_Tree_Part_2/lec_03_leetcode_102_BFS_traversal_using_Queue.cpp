#include<bits/stdc++.h>
#include<queue>
using namespace std;

// BFS traversal  Using queue
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

void levelOrderQueue(TreeNode* root){
    if(root == NULL) return;
    queue<TreeNode*> q;
    q.push(root);
    while(q.size() > 0){
      TreeNode* temp = q.front();
      q.pop();
      cout<<temp->val<<" ";
      if(temp->left !=NULL) q.push(temp->left);
      if(temp->right !=NULL) q.push(temp->right);
   }
}
int main(){
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
    
    levelOrderQueue(a);

    return 0;
}

            //         1            level = 1
            //       /   \
            //      2     3          level = 2
            //    /  \   / \
            //   4    5 6   7         level = 3
            //  /    / \ \
            // 8    9  10 11           level = 4