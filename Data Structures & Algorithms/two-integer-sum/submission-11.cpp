class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        for (int a = 0; a < nums.size(); a++) {
            int complement = target - nums[a];
            if (umap.find(complement) != umap.end()) {
                return {umap[complement], a};
            } else {
                umap[nums[a]] = a;
            }
        }
        return {-1, -1};
    }
};
