class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (const auto& num : nums) {
            freq[num]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for (const auto& key : freq) {
            bucket[key.second].push_back(key.first);
        }
        vector<int> result;
        for (int a = nums.size(); a >= 0; a--) {
            for (int b = 0; b < bucket[a].size(); b++) {
                result.push_back(bucket[a][b]);
                if (result.size() == k) return result;
            }
        }
        return result;
    }
};
