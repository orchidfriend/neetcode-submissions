class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        int size = nums.size();

        for (int a = 0; a < size; a++) {
            if (uset.count(nums[a])) return true;
            uset.insert(nums[a]);
        }
        return false;
    }
};