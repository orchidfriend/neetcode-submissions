class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int size = nums.size();
        int max_streak = 1;
        int streak = 1;
        if (!size) return 0;
        sort(nums.begin(), nums.end());
        int first = nums[0];

        for (int a = 1; a < size; a++) {
            if (first + 1 == nums[a]) {
                streak++;
                first++;
            }
            if (first == nums[a]) {
            } else {
                first = nums[a];
                streak = 1;
            }
            max_streak = max(max_streak, streak);
        }
        return max_streak;
    }
};
