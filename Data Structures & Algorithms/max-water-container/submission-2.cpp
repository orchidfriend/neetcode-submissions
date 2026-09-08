class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int maxA = 0;
        int i = 0, j = heights.size() - 1;
        while (i < j) {
            int height = min(heights[i], heights[j]);
            int area = (j - i) * height;
            maxA = max(area, maxA);
            if (heights[i] > heights[j])
                j--;
            else
                i++;
        }
        return maxA;
    }
};
