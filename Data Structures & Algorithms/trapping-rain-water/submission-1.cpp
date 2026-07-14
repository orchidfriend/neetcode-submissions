class Solution {
   public:
    int trap(vector<int>& height) {
        int maxL = 0, maxR = 0;
        int i = 0, j = height.size() - 1;
        int trapping = 0;
        while (i <= j) {
            if (maxL <= maxR) {
                int drop = min(maxL, maxR) - height[i];
                trapping += (drop > 0) ? drop : 0;
                maxL = max(maxL, height[i]);
                i++;
            } else {
                int drop = min(maxL, maxR) - height[j];
                trapping += (drop > 0) ? drop : 0;
                maxR = max(maxR, height[j]);
                j--;
            }
        }
        return trapping;
    }
};
