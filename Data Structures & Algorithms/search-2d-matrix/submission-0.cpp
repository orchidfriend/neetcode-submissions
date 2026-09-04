class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int a = 0; a < matrix.size(); a++) {
            for (int b = 0; b < matrix[a].size(); b++) {
                if (matrix[a][b] == target) return true;
            }
        }
        return false;
    }
};
