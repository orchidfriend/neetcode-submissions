class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> row;
        unordered_set<int> col;
        unordered_set<int> sub_x;

        if (board.size() != 9 || board[0].size() != 9) return false;

        for (int a = 0; a < 9; a++) {
            row.clear();
            col.clear();
            sub_x.clear();
            for (int b = 0; b < 9; b++) {
                if (board[a][b] != '.' && row.count(board[a][b])) {
                    return false;
                } else {
                    row.insert(board[a][b]);
                }
                if (board[b][a] != '.' && col.count(board[b][a])) {
                    return false;
                } else {
                    col.insert(board[b][a]);
                }
                char tempChar = board[(b/3)+(a/3*3)][(b%3)+((a%3)*3)];
                if (tempChar != '.' && sub_x.count(tempChar)) {
                    return false;
                } else {
                    sub_x.insert(tempChar);
                }
            }
        }
        return true;
    }
};
