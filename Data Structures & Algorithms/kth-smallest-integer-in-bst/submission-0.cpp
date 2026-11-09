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
    void convertTree(TreeNode* root, vector<int>& res) {
        if (!root) return;
        convertTree(root->left,res);
        res.push_back(root->val);
        convertTree(root->right,res);
    }

   public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> table;
        convertTree(root, table);
        return table[k-1];
    }
};
