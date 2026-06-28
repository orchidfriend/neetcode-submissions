class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        for (int a = 0; a < nums.size(); a++) {
            for (int b = 0; b < nums.size(); b++) {
                if (a != b) {
                    result[a] *= nums[b];
                }
            }
        }
        return result;
    }
};
