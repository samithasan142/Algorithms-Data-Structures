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

    void postorderTraversalR(TreeNode* root){
        if(root == nullptr) return;

        if(root->left){
            postorderTraversal(root->left);
        }

        if(root->right){
            postorderTraversal(root->right);
        }
        ans.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        postorderTraversalR(root);
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
    vector<int> result = sol.postorderTraversal(root);

    cout << "Postorder Traversal: ";
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

    Postorder Traversal: 4 5 2 6 7 3 1
*/




