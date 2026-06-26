class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset;
        int size = nums.size();
        int max_streak = 0;
        for (int a = 0; a < size; a++) {
            uset.insert(nums[a]);
        }
        for (int a = 0; a < size; a++) {
            if (!uset.count(nums[a] - 1)) {
                int first = nums[a];
                int streak = 0;
                while (uset.count(first)) {
                    streak++;
                    first++;
                }
                max_streak = max(max_streak, streak);
            }
        }
        return max_streak;
    }
};
