class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);

        for (int a = 1; a < n; a++) {
            res[a] = res[a - 1] * nums[a - 1];
        }

        int postfix = 1;
        for (int a = n - 1; a >= 0; a--) {
            res[a] *= postfix;
            postfix *= nums[a];
        }
        return res;
    }
};
