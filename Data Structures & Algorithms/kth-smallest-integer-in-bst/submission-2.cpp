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
    int helper(TreeNode* root, int& k) {
        if (!root) return -1;
        int temp = helper(root->left, k);
        if (temp != -1) return temp;
        k--;
        if (k == 0) return root->val;
        temp = helper(root->right, k);
        if (temp != -1) return temp;
    }

   public:
    int kthSmallest(TreeNode* root, int k) { return helper(root, k); }
};
