/* Leetcode Problem no: 965 (Easy) */

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
    vector<int> ans;

    void inorderTraversal(TreeNode* root){
        if(root != NULL){
            inorderTraversal(root->left);
            ans.push_back(root->val);
            inorderTraversal(root->right);
        }
    }

    bool isUnivalTree(TreeNode* root){
        inorderTraversal(root);

        int firstElement = ans[0];
        for(int i = 1; i < ans.size(); i++){
            if(ans[i] != firstElement)
                return false;
        }
        return true;
    }
};

int main() {
    Solution sol;

    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(2);
    root->right->right = new TreeNode(2);

    bool isUnival = sol.isUnivalTree(root);

    if(isUnival){
        cout << "The binary tree is a univalued tree." << endl;
    }else{
        cout << "The binary tree is not a univalued tree." << endl;
    }

    return 0;
}
