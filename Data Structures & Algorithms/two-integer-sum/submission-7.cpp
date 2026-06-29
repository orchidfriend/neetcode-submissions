class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        int size = nums.size();
        vector<int> result;

        for (int a = 0; a < size; a++) {
            if (umap.find(target - nums[a]) != umap.end()) {
                result.push_back(umap[target - nums[a]]);
                result.push_back(a);
            }
            umap[nums[a]] = a;
        }
        return result;
    }
};
