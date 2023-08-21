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
    void inorder(TreeNode* root){
        if(root->left) inorder(root->left);
        ans.push_back(root->val);
        if(root->right) inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL) return ans;
        inorder(root);
        return ans;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    Solution sol;
    vector<int> result = sol.inorderTraversal(root);

    cout << "Inorder Traversal: ";
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

    Inorder Traversal: 4 2 5 1 6 3 7
*/

/*
class Solution {
public:
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL) return ans;

        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);

        return ans;
    }
};
*/
