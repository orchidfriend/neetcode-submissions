class Solution {
   public:
    int trap(vector<int>& height) {
        int leftMax = 0;
        int rightMax = 0;
        int total = 0;
        int l = 0, r = height.size() - 1;
        while (l <= r) {
            int drop = 0;
            if (leftMax <= rightMax) {
                drop =  leftMax - height[l];
                if (drop <= 0) {
                    drop = 0;
                    leftMax = height[l];
                }
                l++;
            } else {
                drop = rightMax - height[r];
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
