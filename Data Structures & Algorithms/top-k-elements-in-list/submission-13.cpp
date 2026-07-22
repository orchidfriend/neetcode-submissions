class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int a = 0; a < nums.size(); a++) {
            freq[nums[a]]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto const& f : freq) {
            bucket[f.second].push_back(f.first);
        }
        vector<int> res;
        for (int a = nums.size(); a >= 0; a--) {
            if (bucket[a].size()) {
                for (const auto& num : bucket[a]) {
                    if (res.size() == k) return res;
                    res.push_back(num);
                }
            }
        }
        return res;
    }
};
