class Solution {
public:
    int func(int i, vector<int>& coins, int amount, vector<int>& dp){

        if(amount == 0){
            return 0;
        }
        if(dp[amount] != -1) return dp[amount];

        int ans = INT_MAX;
        
        for(int i = 0; i<coins.size(); i++){
            if(amount - coins[i] >= 0)
            ans = min(func(i, coins, amount - coins[i], dp) + 1LL, ans + 0LL);
        }

        return dp[amount] = ans;

    }
    int coinChange(vector<int>& coins, int amount) {
        int size = 0;
        vector<int> dp(amount+1, -1);
        int ans = func(0, coins, amount, dp);
         
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
