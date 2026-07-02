class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> streak;
        int maxStreak = 0;

        for (int a = 0; a < nums.size(); a++) {
            if (streak[nums[a]] == 0) {
                streak[nums[a]] = streak[nums[a] - 1] + streak[nums[a] + 1] + 1;
                streak[nums[a] - streak[nums[a] - 1]] = streak[nums[a]];
                streak[nums[a] + streak[nums[a] + 1]] = streak[nums[a]];
                maxStreak = max(maxStreak, streak[nums[a]]);
            }
        }
        return maxStreak;
    }
};
