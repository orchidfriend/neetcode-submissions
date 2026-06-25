class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uset;

        int n = nums.size();
        for (int a = 0; a < n; a++) {
            if (uset.find(nums[a]) != uset.end()) {
                return true;
            } else {
                uset.insert(nums[a]);
            }
        }
        return false;
    }
};