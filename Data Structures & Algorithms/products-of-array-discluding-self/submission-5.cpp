class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        for (int a = 1; a < nums.size(); a++) {
            result[a] = result[a - 1] * nums[a - 1];
        }
        int postfix = 1;
        for (int b = nums.size() - 1; b >= 0; b--) {
            result[b] = result[b] * postfix;
            postfix *= nums[b];
        }
        return result;
    }
};
