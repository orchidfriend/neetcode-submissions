class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (const auto& num : nums) {
            count[num]++;
        }
        vector<vector<int>> bin(nums.size() + 1);
        for (const auto& key : count) {
            bin[key.second].push_back(key.first);
        }
        vector<int> result;
        for (int a = nums.size(); a >= 0; a--) {
            for (int b = 0; b < bin[a].size(); b++) {
                result.push_back(bin[a][b]);
                if (result.size() == k) return result;
            }
        }
        return result;
    }
};
