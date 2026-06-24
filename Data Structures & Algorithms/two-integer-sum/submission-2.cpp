class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int temp = nums[i] + nums[j];
                if (temp == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }

        return result;
    }
};
