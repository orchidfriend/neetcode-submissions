class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);
        int postfix = 1;

        for(int a=1;a<nums.size();a++) {
            result[a]=nums[a-1]*result[a-1];
        }
        for(int a=nums.size()-2;a>=0;a--) {
            postfix *= nums[a+1];
            result[a] *= postfix;
        }
        return result;
    }
};
