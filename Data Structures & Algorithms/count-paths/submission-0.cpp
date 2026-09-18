class Solution {
public:
    int func(int r, int c, int m, int n, vector<vector<int>>& dp){
        if(r == m && c == n){
            return 1;
        } 
        if(r>m || c>n) return 0;

        if(dp[r][c] != -1) return dp[r][c];

        int goRight = func(r, c+1, m, n, dp);
        int goDown = func(r+1, c, m, n, dp);

        return dp[r][c] = goDown + goRight;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(100, vector<int>(100, -1));
        return func(1,1,m,n, dp);
        
    }
};
