class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;

        for (int a = 0; a < nums.size(); a++) {
            umap[nums[a]]++;
        }
        vector<vector<int>> freq(nums.size()+1);
        for (const auto& key : umap) {
            freq[key.second].push_back(key.first);
        }
        vector<int> result;
        for (int a = freq.size() - 1; a >= 0; a--) {
            for (int b = 0; b < freq[a].size(); b++) {
                result.push_back(freq[a][b]);
                if (result.size() == k) return result;
            }
        }
        return result;
    }
};
