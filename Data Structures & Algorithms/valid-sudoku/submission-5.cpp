class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9), cols(9), boxes(9);
        int ch, box;
        for(int i = 0; i < board.size(); i++)
            for(int j = 0; j < board.size(); j++)
            {
                ch = board[i][j]; 
                if(isalnum(ch))
                {
                    box = (i / 3) * 3 + j / 3;
                    if(rows[i].count(ch) ||
                       cols[j].count(ch) ||
                       boxes[box].count(ch))
                        return false;
                    rows[i].insert(ch);
                    cols[j].insert(ch);
                    boxes[box].insert(ch);
                }
            }
        return true;
    }
};
