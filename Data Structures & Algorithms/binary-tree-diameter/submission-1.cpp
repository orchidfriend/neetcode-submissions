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
    int max_diameter;

   public:
    int countDiametor(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int leftCount = countDiametor(root->left);
        int rightCount = countDiametor(root->right);
        max_diameter = max(max_diameter, leftCount + rightCount);

        return max(leftCount, rightCount) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        max_diameter = 0;
        countDiametor(root);
        return max_diameter;
    }
};
