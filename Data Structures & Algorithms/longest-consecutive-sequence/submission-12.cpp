class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_map<int, int> seq;
        for (const auto& num : nums) {
            if (seq[num] == 0) {
                seq[num] = seq[num - 1] + seq[num + 1] + 1;
                seq[num - seq[num - 1]] = seq[num];
                seq[num + seq[num + 1]] = seq[num];
                longest = max(longest, seq[num]);
            }
        }
        return longest;
    }
};
