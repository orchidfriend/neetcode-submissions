class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> posit;
        // vector<int> result;
        for (int a = 0; a < nums.size(); a++) {
            int temp = target - nums[a];
            if (posit.find(temp) != posit.end()) {
                return {posit[temp], a};
            }
            posit[nums[a]] = a;
        }
        return {};
    }
};
