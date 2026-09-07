class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> umap;
        for (int a = 0; a < nums.size(); a++) {
            if (umap.find(nums[a]) != umap.end()) return true;
            umap.insert(nums[a]);
        }
        return false;
    }
};