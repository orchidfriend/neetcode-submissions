class Solution {
   public:
    int search(vector<int>& nums, int target) {
        for (int a = 0; a < nums.size(); a++)
            if (nums[a] == target) return a;
        return -1;
    }
};
