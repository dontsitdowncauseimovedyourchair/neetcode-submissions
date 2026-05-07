class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>>rows(9);
        vector<set<char>>columns(9);
        vector<set<char>>squares(9);

        for (int row = 0; row < 9; ++row) {
            for (int col = 0; col < 9; ++col) {
                char cell = board[row][col];
                if (rows.at(row).contains(cell)) {
                    return false;
                }
                if (columns.at(col).contains(cell)) {
                    return false;
                }

                const int square = (row / 3) * 3 + (col / 3);

                if (squares.at(square).contains(cell)) {
                    return false;
                }
                if (cell != '.') {
                    rows.at(row).insert(cell);
                    columns.at(col).insert(cell);
                    squares.at(square).insert(cell);
                }
            }
        }
        return true;
    }
};
