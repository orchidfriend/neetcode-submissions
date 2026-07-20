class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int a = 0; a < nums.size(); a++) {
            freq[nums[a]]++;
        }
        vector<vector<int>> elements(nums.size() + 1);
        for (const auto& key : freq) {
            elements[key.second].push_back(key.first);
        }
        vector<int> res;
        for (int a = nums.size(); a >= 0; a--) {
            if (elements[a].size() > 0) {
                for (const auto e : elements[a]) {
                    res.push_back(e);
                    if (res.size() == k) return res;
                }
            }
        }
        return res;
    }
};
