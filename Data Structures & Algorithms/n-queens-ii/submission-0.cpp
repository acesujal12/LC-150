class Solution {
public:
bool isSafe(int row, int col, vector<string>& board, int n){
        for(int i = 0; i<n; i++){
            if(board[row][i] == 'Q') return false;  // check rows
        }

        for(int i = 0; i<n; i++){
            if(board[i][col] == 'Q') return false;  // check cols
        }

        for(int i = row, j = col; i>=0 && j<n; i--, j++){   // checks right diagonal
            if(board[i][j] == 'Q') return false;    
        }

        for(int i = row, j = col; i>=0 && j>=0; i--, j--){   // checks left diagonal
            if(board[i][j] == 'Q') return false; 
        }

        return true;
    }

    void nQueens(vector<string>& board, vector<vector<string>>& ans, int n, int row){
        if(row == n) {
            ans.push_back(board); 
            return;
        }

        for(int i = 0; i<n; i++){
            if(isSafe(row, i, board, n)){
                board[row][i] = 'Q';
                nQueens(board, ans, n, row+1);
                board[row][i] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;

        nQueens(board, ans, n, 0);

        return ans.size();
    }
};