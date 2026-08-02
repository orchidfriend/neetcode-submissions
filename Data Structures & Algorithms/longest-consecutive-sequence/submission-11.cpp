class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> umap;
        int maxLeng = 0;

        for (const auto& num : nums) {
            if (!umap[num]) {
                umap[num] = umap[num + 1] + umap[num - 1] + 1;
                umap[num - umap[num - 1]] = umap[num];
                umap[num + umap[num + 1]] = umap[num];
                maxLeng = max(maxLeng, umap[num]);
            }
        }
        return maxLeng;
    }
};
