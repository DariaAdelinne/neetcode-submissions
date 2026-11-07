class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9), cols(9), boxes(9);
        for(int i = 0; i < board.size(); i++)
            for(int j = 0; j < board.size(); j++)
            {
                if(isalnum(board[i][j]))
                {
                    int box = (i / 3) * 3 + j / 3;
                    if(rows[i].find(board[i][j]) != rows[i].end() ||
                       cols[j].find(board[i][j]) != cols[j].end() ||
                       boxes[box].find(board[i][j]) != boxes[box].end()) 
                        return false;
                    rows[i].insert(board[i][j]);
                    cols[j].insert(board[i][j]);
                    boxes[box].insert(board[i][j]);
                }
            }
        return true;
    }
};
