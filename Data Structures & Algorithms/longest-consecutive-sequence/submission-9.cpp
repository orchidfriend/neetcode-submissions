class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> streak;
        int maxStreak = 0;

        for (const auto num : nums) {
            if (!streak[num]) {
                streak[num] = streak[num - 1] + streak[num + 1] + 1;
                streak[num - streak[num-1]] = streak[num];
                streak[num + streak[num+1]] = streak[num];
                maxStreak = max(maxStreak, streak[num]);
            }
        }
        return maxStreak;
    }
};
