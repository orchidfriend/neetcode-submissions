class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int y_max = matrix.size();
        int x_max = matrix[0].size();
        int i = 0, j = x_max * y_max - 1;
        while (i <= j) {
            int mid = (i + j) / 2;
            if (matrix[mid / x_max][mid % x_max] == target) {
                return true;
            } else if (matrix[mid / x_max][mid % x_max] < target) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        return false;
    }
};
