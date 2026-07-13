class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int a = 0; a < nums.size(); a++) {
            freq[nums[a]]++;
        }
        vector<vector<int>> bin(nums.size() + 1);
        for (const auto& key : freq) {
            bin[key.second].push_back(key.first);
        }
        vector<int> res;
        int count = 0;
        for (int a = nums.size(); a >= 0; a--) {
            for (int b = 0; b < bin[a].size(); b++) {
                res.push_back(bin[a][b]);
                count++;
                if (count == k) return res;
            }
        }
        return res;
    }
};
