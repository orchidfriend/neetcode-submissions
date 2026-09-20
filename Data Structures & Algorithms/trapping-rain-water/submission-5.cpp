class Solution {
   public:
    int trap(vector<int>& height) {
        int leftMax = height[0];
        int rightMax = height[height.size() - 1];
        int l = 0, r = height.size() - 1;
        int total = 0;
        while (l <= r) {
            int drop = 0;
            if (leftMax < rightMax) {
                drop = min(leftMax,rightMax) - height[l];
                if (drop <= 0) {
                    drop = 0;
                    leftMax = height[l];
                }
                l++;
            } else {
                drop = min(leftMax,rightMax) - height[r];
                if (drop <= 0) {
                    drop = 0;
                    rightMax = height[r];
                }
                r--;
            }
            total += drop;
        }
        return total;
    }
};
