class Solution {
public:
    bool func(int r, int c, vector<vector<char>>& board, string& word, int i){
        if(i == word.size()) return true;

        if((r < 0 || c < 0) || 
            (r>= board.size() || c >= board[0].size()) ||
            (board[r][c] == '#') ||
            word[i] != board[r][c]) return false;

        char prev = board[r][c];
        board[r][c] = '#';
        bool found =
            func(r+1, c, board, word, i+1) ||
            func(r, c+1, board, word, i+1) ||
            func(r-1, c, board, word, i+1) ||
            func(r, c-1, board, word, i+1);

        board[r][c] = prev;

        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i<board.size(); i++){
            for (int j = 0; j<board[0].size(); j++){
                if(func(i, j, board, word, 0)) return true;
            }
        }

        return false;
    }
};
