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
        bool helper(TreeNode* root,int minV,int maxV){
            if(!root)
                return true;
            if (root->val>minV&&root->val<maxV) {
                return helper(root->left,minV,root->val) && helper(root->right,root->val,maxV);
            }
            return false;
        }
   public:
    bool isValidBST(TreeNode* root) {
        bool res = true;
        if (!root) return true;
        
        return helper(root,-1000000001,1000000001);
    }
};
