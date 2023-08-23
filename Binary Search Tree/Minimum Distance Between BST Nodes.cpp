/* Leetcode Problem no: 783 (Easy) */

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
        if(root == NULL){
            return;
        }
        inorderTraversal(root->left);
        inorder.push_back(root->val);
        inorderTraversal(root->right);
    }

    int minDiffInBST(TreeNode* root) {
        inorderTraversal(root);
        int ans = INT_MAX;
        for(int i=0; i<inorder.size()-1; i++){
            ans = min(ans, inorder[i+1]-inorder[i]);
        }
        return ans;
    }
};

int main() {
    Solution sol;

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    int minDiff = sol.minDiffInBST(root);

    cout << "Minimum difference between BST nodes is: " << minDiff << endl;

    return 0;
}
