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
    int minNodes(TreeNode* root, int max_val) {
        int temp;
        if (!root) return 0;
        temp = (root->val >= max_val) ? 1 : 0;
        max_val = max(root->val, max_val);
        return minNodes(root->left, max_val) + minNodes(root->right, max_val) + temp;
    }

   public:
    int goodNodes(TreeNode* root) { return minNodes(root, -200); }
};
