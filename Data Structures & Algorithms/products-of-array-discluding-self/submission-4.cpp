class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        for (int a = 1; a < nums.size(); a++) {
            res[a] = res[a - 1] * nums[a - 1];
        }
        int postfix = 1;
        for (int a = nums.size() - 1; a >= 0; a--) {
            res[a] = res[a] * postfix;
            postfix *= nums[a];
        }
        return res;
    }
};
