/* Leetcode Problem no: 671 (Easy) */

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

    int findSecondMinimumValue(TreeNode* root) {
        inorderTraversal(root);
        sort(ans.begin(), ans.end());

        for(int i=0; i<ans.size()-1; i++){
            if(ans[i] != ans[i+1])
                return ans[i+1];
        }
        return -1;
    }
};

int main() {
    Solution sol;

    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);

    int secondMinimum = sol.findSecondMinimumValue(root);

    if (secondMinimum != -1) {
        cout << "Second minimum value in the binary tree is: " << secondMinimum << endl;
    }else{
        cout << "There is no second minimum value in the binary tree." << endl;
    }

    return 0;
}
