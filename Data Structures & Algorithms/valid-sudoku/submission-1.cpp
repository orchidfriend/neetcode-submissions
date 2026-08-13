class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int column;
        int row;
        int grid;
        int shift;
        for (int i = 0; i < 9; i++) {
            column = 0;
            row = 0;
            grid = 0;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    shift = 1 << (board[i][j] - '1');
                    if (column & shift)
                        return false;
                    else
                        column |= shift;
                }
                if (board[j][i] != '.') {
                    shift = 1 << (board[j][i] - '1');
                    if (row & shift)
                        return false;
                    else
                        row |= shift;
                }
                if (board[(i / 3 * 3) + (j / 3)][(i % 3 * 3) + (j % 3)] != '.') {
                    shift = 1 << (board[(i / 3 * 3) + (j / 3)][(i % 3 * 3) + (j % 3)] - '1');
                    if (grid & shift)
                        return false;
                    else
                        grid |= shift;
                }
            }
        }
        return true;
    }
};
