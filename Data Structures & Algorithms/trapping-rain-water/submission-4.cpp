class Solution {
   public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int l_max = 0, r_max = 0;
        int total = 0;
        while (l <= r) {
            if (l_max < r_max) {
                int temp = min(l_max, r_max) - height[l];
                total += (temp > 0) ? temp : 0;
                l_max = max(l_max, height[l]);
                l++;
            } else {
                int temp = min(l_max, r_max) - height[r];
                total += (temp > 0) ? temp : 0;
                r_max = max(r_max, height[r]);
                r--;
            }
        }
        return total;
    }
};
