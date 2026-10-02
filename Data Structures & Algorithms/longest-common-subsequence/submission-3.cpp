class Solution {
public:
    int func(string text1, string text2, int i, int j, vector<vector<int>>& dp){

        if(i < 0 || j < 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        // remove ith char from text1
        int ans = func(text1, text2, i-1, j, dp);
        // remove jth chr from text2
        ans = max(ans, func(text1, text2, i, j-1, dp));
        // remove from both and add 1 if both chars are equal
        if(text1[i] == text2[j]){
            ans = max(ans, func(text1, text2, i-1, j-1, dp) + 1);
        }

        return dp[i][j] = ans;
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(1001, vector<int>(1001, -1));
        return func(text1, text2, text1.size()-1, text2.size()-1, dp);
    }
};
