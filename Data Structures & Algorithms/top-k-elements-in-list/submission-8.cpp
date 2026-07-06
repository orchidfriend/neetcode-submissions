class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        for (int a = 0; a < nums.size(); a++) {
            umap[nums[a]]++;
        }
        vector<vector<int>> freq(nums.size() + 1);
        for (const auto& key : umap) {
            freq[key.second].push_back(key.first);
        }
        int i = 0;
        vector<int> res;
        for (int a = nums.size(); a >= 0; a--) {
            for (int b = 0; b < freq[a].size(); b++) {
                res.push_back(freq[a][b]);
                i++;
                if (i == k) return res;
            }
        }
        return res;
    }
};
