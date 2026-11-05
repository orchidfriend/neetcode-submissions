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
   public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> res;
        if (!root) return res;
        q.push(root);
        int size = q.size();
        while (size > 0) {
            for (int a = 0; a < size; a++) {
                TreeNode* temp = q.front();
                if (a == size - 1) res.push_back(temp->val);
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
                q.pop();
            }
            size = q.size();
        }
        return res;
    }
};
