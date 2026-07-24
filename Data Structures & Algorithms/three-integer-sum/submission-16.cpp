class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int a = 0; a < nums.size(); a++) {
            int i = a + 1;
            int j = nums.size() - 1;
            if ((a > 0) && (nums[a] == nums[a - 1])) continue;
            while (i < j) {
                int temp = nums[a] + nums[i] + nums[j];
                if (temp == 0) {
                    result.push_back({nums[a], nums[i], nums[j]});
                    i++;
                    j--;
                    while (i < j && nums[i] == nums[i - 1]) i++;
                } else if (temp > 0) {
                    j--;
                } else {
                    i++;
                }
            }
        }
        return result;
    }
};
