class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int a = 0; a < nums.size(); a++) {
            int i = a + 1, j = nums.size() - 1;
            while (i < j) {
                int sum = nums[a] + nums[i] + nums[j];
                if (sum < 0) {
                    i++;
                } else if (sum > 0) {
                    j--;
                } else {
                    result.push_back({nums[a], nums[i], nums[j]});
                    i++;
                    j--;
                    while ((i < j) && (nums[i] == nums[i - 1])) i++;
                }
            }
            while ((a < nums.size() - 1) && (nums[a] == nums[a + 1])) a++;
        }
        return result;
    }
};
