class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n_size=nums.size();
        vector<int> result;

        for(int i=0;i<n_size;i++) {
            int product=1;
            for (int j=0;j<n_size;j++) {
                if (j!=i) {
                    product *= nums[j];
                }
            }
            result.push_back(product);
        }
        return result;
    }
};
