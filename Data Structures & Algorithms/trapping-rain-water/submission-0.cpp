class Solution {
   public:
    int trap(vector<int>& height) {
        int maxR = 0, maxL = 0;
        int i = 0, j = height.size() - 1;
        int trapping = 0;

        while (i <= j) {
            if (maxL <= maxR) {
                trapping += (min(maxR, maxL) - height[i]) > 0 ? min(maxR, maxL) - height[i] : 0;
                maxL = max(maxL, height[i]);
                i++;
            } else {
                trapping += (min(maxR, maxL) - height[j]) > 0 ? min(maxR, maxL) - height[j] : 0;
                maxR = max(maxR, height[j]);
                j--;
            }
        }
        return trapping;
    }
};
