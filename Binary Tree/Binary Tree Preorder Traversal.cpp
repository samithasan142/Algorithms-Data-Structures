#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> ans;

    void preorderTraversalR(TreeNode* root){
        if(root == nullptr) return;

        ans.push_back(root->val);
        if(root->left){
            preorderTraversal(root->left);
        }
        if(root->right){
            preorderTraversal(root->right);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        preorderTraversalR(root);
        return ans;
    }
};

int main() {
    // Creating a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    Solution sol;
    vector<int> result = sol.preorderTraversal(root);

    cout << "Preorder Traversal: ";
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
        _1_
       /   \
      2     3
     / \   / \
    4   5 6   7

    Preorder Traversal: 1 2 4 5 3 6 7
*/
