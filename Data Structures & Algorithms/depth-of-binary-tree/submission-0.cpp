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
    int maxDepth(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        if (!root) return 0;
        q.push({root, 1});
        int max_depth = 0;
        while (q.size() > 0) {
            if (q.front().first->left) {
                q.push({q.front().first->left, q.front().second + 1});
            }
            if (q.front().first->right) {
                q.push({q.front().first->right, q.front().second + 1});
            }
            max_depth = max(max_depth, q.front().second);
            q.pop();
        }
        return max_depth;
    }
};
