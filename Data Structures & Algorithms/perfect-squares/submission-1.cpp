class Solution {
public:
    int func(int n, vector<int>& dp){
        if(n == 0) return 0;
        if(n < 0) return INT_MAX;
        if(dp[n] != -1) return dp[n];
        int minm = INT_MAX;
        for(int i = 1; i<=n; i++){
            int ans = func(n - i*i, dp);
            if(ans != INT_MAX) minm = min(minm, func(n - i*i, dp) + 1);
        }
        return dp[n] = minm;
    }

    int numSquares(int n) {
        vector<int> dp(n+1, -1);
        return func(n, dp);
    }
};