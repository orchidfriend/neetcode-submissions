/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
   private:
    pair<bool, int> checkBalance(TreeNode* root) {
        if (!root) return {true, 0};
        if (!root->left && !root->right) return {true, 1};
        pair<bool, int> left = checkBalance(root->left);
        pair<bool, int> right = checkBalance(root->right);
        if (!left.first ||!right.first )
            return {false,-1};
        return {(abs(left.second - right.second) <= 1), max(left.second, right.second) + 1};
    }

   public:
    bool isBalanced(TreeNode* root) {
        pair<bool, int> res;
        res = checkBalance(root);
        return res.first;
    }
};
