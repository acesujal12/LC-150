class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int cols[9][9]= {0};
        int boxes[9][9]= {0};

        for(int i =0; i<9; i++){
            for(int j =0; j<9; j++){
                if(board[i][j] == '.'){
                    continue;
                }

                int value = board[i][j] - '1';
                if(rows[i][value] == 1){
                    return false;
                }
                rows[i][value] = 1;

                if(cols[j][value] == 1){
                    return false;
                }
                cols[j][value] = 1;

                int box = 3*(i/3) + j/3;
                if(boxes[box][value] == 1){
                    return false;
                }
                boxes[box][value] = 1;
            }
        }
        return true;
        
    }
};
