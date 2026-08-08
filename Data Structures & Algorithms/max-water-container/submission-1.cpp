class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1;
        int maxWater = 0;
        while (i < j) {
            int water = min(heights[i], heights[j]) * (j - i);
            maxWater = max(maxWater, water);
            if (heights[i] <= heights[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxWater;
    }
};
