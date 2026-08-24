class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        while (i <= j) {
            int temp = (i + j) / 2;
            if (nums[temp] == target) {
                return temp;
            } else if (nums[temp] < target) {
                i = temp + 1;
            } else {
                j = temp - 1;
            }
        }
        return -1;
    }
};
