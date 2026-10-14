class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for (int row=0; row <9; row++){
            unordered_set<int> seen_row;
            for (int i = 0; i<9;i++){
                if (board[row][i]== '.' ){
                    continue;
                }
                if (seen_row.count(board[row][i])){
                    return false;
                }
                seen_row.insert(board[row][i]);
            }
        }

        for (int col=0; col <9; col++){
            unordered_set<int> seen_col;
            for (int j = 0; j<9;j++){
                if (board[j][col]=='.'){
                    continue;
                }
                if (seen_col.count(board[j][col])){
                    return false;
                }
                seen_col.insert(board[j][col]);
            }
        }

        for (int square=0; square <9; square++){
            unordered_set<int> seen_square;
            for (int i = 0; i<3;i++){
                for (int j = 0; j<3;j++){

                    int row = ((square/3)*3) + i;
                    int col = ((square%3)*3) + j;

                    if (board[row][col] == '.'){
                        continue;
                    }
                    if (seen_square.count(board[row][col])){
                        return false;
                    }
                    seen_square.insert(board[row][col]);
                }
            }
        }
        return true;

    }
};
