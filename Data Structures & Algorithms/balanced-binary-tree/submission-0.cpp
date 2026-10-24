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
    int countHigh(TreeNode* root) {
        if (!root) return 0;
        int left = countHigh(root->left);
        int right = countHigh(root->right);
        return max(left, right) + 1;
    }

   public:
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        if (!isBalanced(root->left) || !isBalanced(root->right)) return false;
        int left = countHigh(root->left);
        int right = countHigh(root->right);
        if (abs(left - right) > 1) return false;
        return true;
    }
};
