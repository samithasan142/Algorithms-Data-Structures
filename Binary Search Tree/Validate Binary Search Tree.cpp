/* Leetcode Problem no: 98 (Medium) */

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
    vector<int> inorder;
    void inorderTraversal(TreeNode* root){
        if(root->left) inorderTraversal(root->left);
        inorder.push_back(root->val);
        if(root->right) inorderTraversal(root->right);
    }

    bool isValidBST(TreeNode* root) {
        inorderTraversal(root);
        for(int i=0; i<inorder.size()-1; i++){
            if(inorder[i] >= inorder[i+1])
                return false;
        }
        return true;
    }
};

int main() {
    Solution sol;

    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    bool isValid = sol.isValidBST(root);

    if (isValid) {
        cout << "The binary tree is a valid BST." << endl;
    } else {
        cout << "The binary tree is not a valid BST." << endl;
    }

    return 0;
}
