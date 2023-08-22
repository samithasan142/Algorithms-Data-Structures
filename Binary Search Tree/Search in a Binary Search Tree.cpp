/* Leetcode Problem no: 700 */

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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return NULL;

        if(root->val == val){
            return root;
        }else if(root->val > val){
            return searchBST(root->left, val);
        }else{
            return searchBST(root->right, val);
        }
    }
};

int main(){
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    Solution sol;

    int targetValue = 2;
    TreeNode* result = sol.searchBST(root, targetValue);

    if(result){
        cout << "Node with value " << targetValue << " found in the tree." << endl;
    }else{
        cout << "Node with value " << targetValue << " not found in the tree." << endl;
    }

    return 0;
}
