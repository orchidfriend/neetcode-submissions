class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> result;

        for (int a = 0; a < size; a++) {
            for (int b = 0; b < size; b++) {
                if ((a != b) && (nums[a] + nums[b] == target)) {
                    result.push_back(a);
                    result.push_back(b);
                    return result;
                }
            }
        }
        return result;
    }
};
