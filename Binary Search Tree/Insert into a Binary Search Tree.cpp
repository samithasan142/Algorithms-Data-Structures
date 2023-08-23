/* Leetcode Problem no: 701 (Medium) */

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            return new TreeNode(val);
        }
        else if(val < root->val){
            root->left = insertIntoBST(root->left, val);
        }else{
            root->right = insertIntoBST(root->right, val);
        }
        return root;
    }
};

// Helper function to print inorder traversal of the BST
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) return;

    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int main(){
    Solution sol;

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    int newValue = 5; // The value we want to insert
    root = sol.insertIntoBST(root, newValue);

    cout << "Inorder traversal of the modified BST: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
