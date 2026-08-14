class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prePro(nums.size(), 1);
        int post = 1;
        for (int a = 1; a < nums.size(); a++) {
            prePro[a] = prePro[a - 1] * nums[a - 1];
        }
        for (int a = nums.size() - 2; a >= 0; a--) {
            post = post * nums[a + 1];
            prePro[a] *= post;
        }
        return prePro;
    }
};
