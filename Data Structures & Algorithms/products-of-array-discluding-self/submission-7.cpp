class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(), 1);
        for (int a = 1; a < nums.size(); a++) {
            prefix[a] = prefix[a - 1] * nums[a - 1];
        }
        int postfix = nums[nums.size() - 1];
        for (int a = nums.size() - 2; a >= 0; a--) {
            prefix[a] = prefix[a] * postfix;
            postfix = nums[a] * postfix;
        }
        return prefix;
    }
};
