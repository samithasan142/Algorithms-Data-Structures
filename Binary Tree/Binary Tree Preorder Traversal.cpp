/* Leetcode Problem no: 144 (Easy) */

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
    void preorder(TreeNode* root){
        ans.push_back(root->val);
        if(root->left) preorder(root->left);
        if(root->right) preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL) return ans;
        preorder(root);
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

/*
class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL) return ans;

        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);

        return ans;
    }
};
    
    // We can also use this code. But it takes more Memory. Runtime: 0ms, Memory: 10.4 MB
    // For the previous code, Runtime: 4ms, Memory: 8.3 MB 
*/
