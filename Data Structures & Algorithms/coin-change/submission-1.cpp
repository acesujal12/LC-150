class Solution {
public:
    int func(int i, vector<int>& coins, int amount, vector<vector<int>>& dp){

        if(amount < 0) return INT_MAX;
        if(amount == 0) return 0;
        if(i >= coins.size()) return INT_MAX;
        if(dp[i][amount] != -1) return dp[i][amount];

        return dp[i][amount] = min(func(i, coins, amount - coins[i], dp) + 1LL, func(i+1, coins, amount, dp) + 0LL);

    }
    int coinChange(vector<int>& coins, int amount) {
        int size = 0;
        vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, -1));
        int ans = func(0, coins, amount, dp);
         
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
