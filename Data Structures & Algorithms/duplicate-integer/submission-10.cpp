class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        for (int a = 0; a < nums.size(); a++) {
            uset.insert(nums[a]);
        }
        return nums.size() > uset.size();
    }
};