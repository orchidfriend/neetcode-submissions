class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (!matrix.size()) return false;
        int y_max = matrix.size();
        int x_max = matrix[0].size();
        int l = 0, r = (y_max * x_max) - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            int midValue = matrix[mid / x_max][mid % x_max];
            if (midValue == target)
                return true;
            else if (midValue > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return false;
    }
};
