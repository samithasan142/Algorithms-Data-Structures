/* Leetcode Problem no: 230 */

#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
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
        if(root == NULL) return;

        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);
    }

    int kthSmallest(TreeNode* root, int k) {
        inorderTraversal(root);
        return ans[k-1];
    }
};

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->right = new TreeNode(2);

    Solution sol;

    int k = 3;
    int value = sol.kthSmallest(root, k);
    cout << "The kth smallest element is: " << value << endl;

    return 0;
}
