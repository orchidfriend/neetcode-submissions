class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        int size = nums.size();
        for (int a = 0; a < size - 1; a++) {
            for (int b = a + 1; b < size; b++) {
                if (nums[a] == nums[b]) return true;
            }
        }
        return false;
    }
};